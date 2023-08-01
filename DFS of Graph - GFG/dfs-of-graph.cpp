//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int node,int n,vector<int> adj[],int visited[],vector<int>&ans)
    {
            visited[node]=1;
            ans.push_back(node);
            for(int i=0;i<adj[node].size();i++)
            {
                int node2=adj[node][i];
                if(visited[node2]==0)
                {
                    dfs(node2,n,adj,visited,ans);
                }
            }
    }
    vector<int> dfsOfGraph(int n, vector<int> adj[]) {
        // Code here
        int visited[n]={0};
        int start=0;
        vector<int>ans;
        dfs(start,n,adj,visited,ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends