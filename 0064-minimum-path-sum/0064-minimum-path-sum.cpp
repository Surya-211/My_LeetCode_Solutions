class Solution {
public:
    
    int f(vector<vector<int>>grid,int i,int j,int m,int n,vector<vector<int>>&dp)
    {
        if(i==m || j==n)
            return 1e8;
        if(i==m-1 && j==n-1)
            return grid[i][j];
        if(dp[i][j]!=-1)
            return dp[i][j];
        int d=grid[i][j]+f(grid,i+1,j,m,n,dp);
        int r=grid[i][j]+f(grid,i,j+1,m,n,dp);
        return dp[i][j]=min(d,r);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        //int sum=f(grid,0,0,m,n,dp);
        int sum=0;
        for(int i=n-1;i>=0;i--)
        {
            sum+=grid[m-1][i];
            dp[m-1][i]=sum;
        }
        for(int i=m-2;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                int d=grid[i][j];
                if(i+1<m)
                    d+=dp[i+1][j];
                else
                    d+=1e8;
                int r=grid[i][j];
                if(j+1<n)
                    r+=dp[i][j+1];
                else
                    r+=1e8;
                dp[i][j]=min(d,r);
            }
        }
        return dp[0][0];
    }
};