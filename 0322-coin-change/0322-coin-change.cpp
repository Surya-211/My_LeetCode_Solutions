class Solution {
public:
    int func(int ind, vector<int>&v,int amount,vector<vector<int>>&dp)
    {
        if(ind==0)
        {
            if(amount%v[0]==0)
                return amount/v[0];
            else
                return 1e9;
        }
        if(dp[ind][amount]!=-1)
            return dp[ind][amount];
        int notTake=func(ind-1,v,amount,dp);
        int take=1e9;
        if(v[ind]<=amount)
            take=1+func(ind,v,amount-v[ind],dp);
        return dp[ind][amount]=min(take,notTake);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans= func(n-1,coins,amount,dp);
        if(ans>=1e9)
            return -1;
        else
            return ans;
    }
};