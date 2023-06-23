class Solution {
public:
    bool dfs(unordered_map<int,vector<int>>&m,vector<int>&vis,int source,int destination)
    {
        if(source==destination)
            return true;
        if(vis[source]==1)
            return false;
        vis[source]=1;
        for(int i=0;i<m[source].size();i++)
        {
            int node=m[source][i];
            if(vis[node]==0)
            {
                if(dfs(m,vis,node,destination)==true)
                    return true;
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>>m;
        for(int i=0;i<edges.size();i++)
        {
            int a=edges[i][0];
            int b=edges[i][1];
            m[a].push_back(b);
            m[b].push_back(a);
        }
        vector<int>vis(n,0);
        return dfs(m,vis,source,destination);
    }
};