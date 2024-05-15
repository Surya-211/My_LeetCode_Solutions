class Solution {
public:
    int func(vector<int>&nums,int ind,vector<int>&dp)
    {
        if(ind<0)
            return 0;
        if(ind==0)
            return nums[0];
        if(dp[ind]!=-1)
            return dp[ind];
        int take=nums[ind]+func(nums,ind-2,dp);
        int not_take=func(nums,ind-1,dp);
        return dp[ind]=max(take,not_take);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return func(nums,n-1,dp);
    }
};