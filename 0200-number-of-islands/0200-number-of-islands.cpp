class Solution {
public:
    void dfs(int a,int b,vector<vector<char>>&grid,vector<int>row,vector<int>col,int r,int c)
    {
        grid[a][b]=0;;
        for(int i=0;i<row.size();i++)
        {
            int nrow=a+row[i];
            int ncol=b+col[i];
            if(nrow>=0 && nrow<r && ncol>=0 && ncol<c && grid[nrow][ncol]=='1')
                dfs(nrow,ncol,grid,row,col,r,c);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>row={-1,0,1,0};
        vector<int>col={0,1,0,-1};
        int count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    dfs(i,j,grid,row,col,m,n);
                }
            }
        }
        return count;
    }
};