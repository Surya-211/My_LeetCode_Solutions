class Solution {
public:
    int f(vector<int>v,vector<int>&dp,int i,int j)
    {
        if(i>=j)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int left=v[i]+max(f(v,dp,i+1,j-1),f(v,dp,i+2,j));
        int right=v[j]+max(f(v,dp,i,j-2),f(v,dp,i+1,j-1));
        return dp[i]=max(left,right);
    }
    bool stoneGame(vector<int>& piles) {
        int sum=0;
        for(int i=0;i<piles.size();i++)
        {
            sum+=piles[i];
        }
        int n=piles.size();
        vector<int>dp(n,-1);
        int maxi=f(piles,dp,0,n-1);
        if(maxi>sum/2)
            return true;
        else 
            return false;
    }
};