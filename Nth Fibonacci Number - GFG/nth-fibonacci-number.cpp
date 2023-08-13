//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        if(n==1)
        return 1;
        if(n==2)
        return 1;
        int a=1;
        int b=1;
        int i=3;
        int mod=1000000007;
        while(i<=n)
        {
            int sum=(a+b)%mod;
            a=b;
            b=sum;
            i++;
        }
        return b;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends