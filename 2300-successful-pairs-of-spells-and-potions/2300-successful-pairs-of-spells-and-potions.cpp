class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        sort(potions.begin(),potions.end());
        vector<int>v;
        for(int i=0;i<spells.size();i++)
        {
            long long mini=ceil(1.0*success/spells[i]);
            int n=potions.size();
            int low=0;
            int high=n-1;
            if(mini>potions[n-1])
            {
                v.push_back(0);
                continue;
            }
            while(low<high)
            {
                int mid=(low+high)/2;
                if(potions[mid]>=mini)
                    high=mid;
                else
                    low=mid+1;
            }
            v.push_back(n-low);
        }
        return v;
    }
};