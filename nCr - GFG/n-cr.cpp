//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int mod=1000000007;
    int nCr(int n, int r){
        // code here
        if(r>n)
        return 0;
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return f(n,r,dp);
    }
    int f(int n,int r,vector<vector<int>>&dp)
    {
        if(r==0 || r==n)
        return 1;
        if(dp[n][r]!=-1)
        return  dp[n][r];
        return dp[n][r]=(f(n-1,r-1,dp)+f(n-1,r,dp))%mod;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends