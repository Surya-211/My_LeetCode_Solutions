//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        unordered_map<string,int>m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        priority_queue<pair<int,string>>q;
        for(auto i:m)
        {
            pair<int,string>p;
            p.first=i.second;
            p.second=i.first;
            q.push(p);
        }
        int freq=q.top().first;
        while(!q.empty())
        {
            if(q.top().first!=freq)
            break;
            else
            q.pop();
        }
        if(q.empty())
        return "";
        pair<int,string>p=q.top();
        return p.second;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends