class Solution {
public:
    void dfs(vector<vector<int>>&v,vector<vector<int>>&vis,int a,int b,int color,int c,vector<int>row,vector<int>col,int m,int n)
    {
        vis[a][b]=1;
        v[a][b]=color;
        for(int i=0;i<row.size();i++)
        {
            int nrow=a+row[i];
            int ncol=b+col[i];
            if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && v[nrow][ncol]==c && vis[nrow][ncol]==0)
                dfs(v,vis,nrow,ncol,color,c,row,col,m,n);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>v=image;
        int m=image.size();
        int n=image[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        int c=image[sr][sc];
        vector<int>row={-1,0,1,0};
        vector<int>col={0,1,0,-1};
        dfs(v,vis,sr,sc,color,c,row,col,m,n);
        return v;
    }
};