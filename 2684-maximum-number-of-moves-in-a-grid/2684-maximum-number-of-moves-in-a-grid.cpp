class Solution {
public:
    int func(vector<vector<int>>&v,int i,int j,int m,int n,int prev,vector<vector<int>>&dp)
    {
        if(i<0 || i>=m || j>=n)
            return 0;
        if(v[i][j]<=prev)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ud=func(v,i-1,j+1,m,n,v[i][j],dp);
        int st=func(v,i,j+1,m,n,v[i][j],dp);
        int ld=func(v,i+1,j+1,m,n,v[i][j],dp);
        return dp[i][j]=1+max(ud,max(st,ld));
    }
    int maxMoves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int maxi=0;
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        for(int i=0;i<m;i++)
        {
            maxi=max(maxi,func(grid,i,0,m,n,0,dp));
        }
        return maxi-1;
    }
};