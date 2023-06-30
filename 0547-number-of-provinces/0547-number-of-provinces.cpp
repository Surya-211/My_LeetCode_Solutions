class Solution {
public:
    void dfs(int i,vector<vector<int>>graph,vector<int>&vis,int n)
    {
        vis[i]=1;
        for(int j=0;j<n;j++)
        {
            if(graph[i][j]==1 && vis[j]==0)
                dfs(j,graph,vis,n);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>vis(n,0);
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                count++;
                dfs(i,isConnected,vis,n);
            }
        }
        return count;
    }
};