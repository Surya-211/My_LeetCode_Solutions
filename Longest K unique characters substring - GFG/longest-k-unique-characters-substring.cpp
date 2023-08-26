//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int maxi=-1;
    unordered_map<char,int>m;
    int j=0;
    for(int i=0;i<s.size();i++)
    {
        m[s[i]]++;
        if(m.size()==k)
        {
            maxi=max(maxi,i-j+1);
        }
        else if(m.size()>k)
        {
            while(m.size()>k)
            {
                m[s[j]]--;
                if(m[s[j]]==0)
                m.erase(s[j]);
                j++;
            }
        }
    }
    return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends