class Solution {
public:
    
    bool func(vector<vector<int>>& v,int health,int i,int j,int m,int n,vector<vector<int>>&vis,vector<vector<vector<int>>>&dp)
    {
        if(i<0 || i>=m || j<0 || j>=n || health<0 || vis[i][j]==1)
            return false;
        if(i==0 && j==0)
        {
            if(v[i][j]==1)
                health-=1;
            if(health>=1)
                return true;
            else
                return false;
        }
        if(dp[i][j][health]!=-1)
            return dp[i][j][health];
             
        vis[i][j]=1;
        bool up=func(v,health-v[i][j],i-1,j,m,n,vis,dp);
        bool down=func(v,health-v[i][j],i+1,j,m,n,vis,dp);
        bool right=func(v,health-v[i][j],i,j+1,m,n,vis,dp);
        bool left=func(v,health-v[i][j],i,j-1,m,n,vis,dp);
        
        vis[i][j]=0;
        return dp[i][j][health]=up||down||left||right;
    }
    
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        vector<vector<vector<int>>>dp(m,vector<vector<int>>(n,vector<int>(health+1,-1)));
        return func(grid,health,m-1,n-1,m,n,vis,dp);
    }
};