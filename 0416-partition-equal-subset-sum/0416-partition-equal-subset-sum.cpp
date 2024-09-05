class Solution {
public:
    bool func(int ind,int sum,vector<int>&nums,vector<vector<int>>&dp)
    {
        if(sum==0)
            return true;
        if(ind==0)
        {
            if(nums[ind]==sum)
                return true;
            else
                return false;
        }
        if(dp[ind][sum]!=-1)
            return dp[ind][sum];
        bool notTake=func(ind-1,sum,nums,dp);
        bool take=false;
        if(nums[ind]<=sum)
            take=func(ind-1,sum-nums[ind],nums,dp);
        return dp[ind][sum]=notTake | take; 
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        if(sum%2==1)
            return false;
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        int s=sum/2;
        return func(n-1,s,nums,dp);
    }
};