class Solution {
public:
    void dfs(int a,vector<vector<int>>graph,vector<vector<int>>&ans,vector<int>&v,int n)
    {
        v.push_back(a);
        for(int i=0;i<graph[a].size();i++)
        {
            dfs(graph[a][i],graph,ans,v,n);
        }
        if(a==n)
            ans.push_back(v);
        v.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        vector<int>v;
        int n=graph.size();
        dfs(0,graph,ans,v,n-1);
        return ans;
    }
};