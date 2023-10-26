//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int help(string& s1,string& s2,int i,int j,vector<vector<int>>& memo)
    {
        //base case
        if(i<=0 or j<=0)
        return 0;
        
        //memo check
        if(memo[i][j]!=-1)
        return memo[i][j];
        
        //recursive calls 
        //small calculation
        if(s1[i-1]==s2[j-1])
        return 1+help(s1,s2,i-1,j-1,memo);
        
        int a=help(s1,s2,i-1,j,memo);
        int b=help(s1,s2,i,j-1,memo);
        
        return memo[i][j]=max(a,b);
    }

    int minimumNumberOfDeletions(string S) { 
        
        int n=S.length();
        string t=S;
        reverse(t.begin(),t.end());
        vector<vector<int>> memo(n+1,vector<int>(n+1,-1));
        int ans=help(S,t,n,n,memo);
    
        return n-ans;
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}
// } Driver Code Ends