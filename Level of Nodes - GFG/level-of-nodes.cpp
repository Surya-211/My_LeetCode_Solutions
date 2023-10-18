//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
{
    // code here
        vector<bool> visited(V, false);
        vector<int> level(V, -1); // To store the level of each node
        queue<int> q;
        q.push(0); // Starting from node 0
        visited[0] = true;
        level[0] = 0;
 
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
 
            for (int neighbor : adj[node])
            {
                if (!visited[neighbor])
                {
                    visited[neighbor] = true;
                    level[neighbor] = level[node] + 1;
                    q.push(neighbor);
                }
            }
        }
 
        return level[X];
}
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}


// } Driver Code Ends