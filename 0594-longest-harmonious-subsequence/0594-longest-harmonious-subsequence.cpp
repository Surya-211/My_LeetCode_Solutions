class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int maxi=0;
        for(auto i:m)
        {
            int sum=i.second;
            int n=i.first;
            if(m.find(n+1)!=m.end())
                sum+=m[n+1];
            else
                sum=0;
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};