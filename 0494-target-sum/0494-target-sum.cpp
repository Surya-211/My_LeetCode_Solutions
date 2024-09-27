class Solution {
public:
    int func(vector<int>&nums,int sum,int ind,vector<vector<int>>&dp)
    {
        if(ind==0)
        {
            if(sum==0 &&nums[0]==0)
                return 2;
            if(sum==0 || sum==nums[0])
                return 1;
            return 0;
        }
        if(dp[ind][sum]!=-1)
            return dp[ind][sum];
        
        int notTake=func(nums,sum,ind-1,dp);
        int take=0;
        if(nums[ind]<=sum)
            take=func(nums,sum-nums[ind],ind-1,dp);
        return dp[ind][sum]=notTake+take;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        if((sum-target)%2==1 || (sum-target)<0)
            return 0;
        vector<vector<int>>dp(n,vector<int>(2001,-1));
        return func(nums,(sum-target)/2,n-1,dp);
    }
};