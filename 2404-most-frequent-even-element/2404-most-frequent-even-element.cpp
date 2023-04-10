class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int ans=-1;
        int maxi=0;
        for(auto i:m)
        {
            int n=i.first;
            if(n%2==0)
            {
                if(i.second>maxi)
                {
                    ans=n;
                    maxi=i.second;
                }
            }
        }
        return ans;
    }
};