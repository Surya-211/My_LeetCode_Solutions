class Solution {
public:
    int func(int amount,vector<int>&coins,int ind,vector<vector<int>>&dp)
    {
        if(ind==0)
        {
            if(amount%coins[0]==0)
                return 1;
            else
                return 0;
        }
        if(dp[ind][amount]!=-1)
            return dp[ind][amount];
        int take=0;
        if(amount>=coins[ind])
            take=func(amount-coins[ind],coins,ind,dp);
        int notTake=func(amount,coins,ind-1,dp);
        return dp[ind][amount]=take+notTake;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        return func(amount,coins,n-1,dp);
    }
};