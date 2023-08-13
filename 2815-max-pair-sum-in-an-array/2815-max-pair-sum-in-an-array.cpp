class Solution {
public:
    int maxSum(vector<int>& nums) {
        int maxi=-1;
        unordered_map<int,vector<int>>m;
        for(int i=0;i<nums.size();i++)
        {
            int n=nums[i];
            int max_digit=0;
            while(n>0)
            {
                max_digit=max(max_digit,n%10);
                n/=10;
            }
            m[max_digit].push_back(nums[i]);
        }
        for(auto i:m)
        {
            if(i.second.size()>1)
            {
                vector<int>v=i.second;
                sort(v.begin(),v.end(),greater<int>());
                maxi=max(maxi,v[0]+v[1]);
            }
        }
        return maxi;
    }
};