//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    int n=str.size();
		    vector<int>cur(n+1,0);
		    vector<int>prev(n+1,0);
		    for(int i=1;i<=n;i++)
		    {
		        for(int j=1;j<=n;j++)
		        {
		            if(str[i-1]==str[j-1] && i!=j)
		            {
		                cur[j]=1+prev[j-1];
		            }
		            else
		            {
		                cur[j]=max(prev[j],cur[j-1]);
		            }
		        }
		        prev=cur;
		    }
		    return prev[n];
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends