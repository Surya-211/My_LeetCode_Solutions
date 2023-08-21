//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int count=0;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==1)
                {
                int c=0;
                if(i-1>=0 && j-1>=0)
                {
                    if(matrix[i-1][j-1]==0)
                    c++;
                }
                if(i-1>=0)
                {
                    if(matrix[i-1][j]==0)
                    c++;
                }
                if(i-1>=0 && j+1<n)
                {
                    if(matrix[i-1][j+1]==0)
                    c++;
                }
                if(j+1<n)
                {
                    if(matrix[i][j+1]==0)
                    c++;
                }
                if(i+1<m && j+1<n)
                {
                    if(matrix[i+1][j+1]==0)
                    c++;
                }
                if(i+1<m)
                {
                    if(matrix[i+1][j]==0)
                    c++;
                }
                if(i+1<m && j-1>=0)
                {
                    if(matrix[i+1][j-1]==0)
                    c++;
                }
                if(j-1>=0)
                {
                    if(matrix[i][j-1]==0)
                    c++;
                }
                if(c!=0 && c%2==0)
                count++;
                }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends