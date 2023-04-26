//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& v){
        // Write your code here.
        
        int count=0;
        int s=m;
        for(int i=0;i<s;i++)
        {
            if(i==0 && v[i]==0)
            {
                if(i<s-1)
                {
                    if(v[i+1]==0)
                    {
                        v[i]=1;
                        count++;
                    }
                }
                else if(i==s-1)
                count++;
            }
            else if(i==s-1 && v[i]==0)
            {
                if(i>0)
                {
                    if(v[i-1]==0)
                    {
                        count++;
                        v[i]=1;
                    }
                }
            }
            else if(v[i]==0)
            {
                if(v[i-1]==0&&v[i+1]==0)
                {
                    v[i]=1;
                    count++;
                }
            }
        }
        if(count>=n)
        return true;
        else
        return false;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> seats(m);
        for (int i = 0; i < m; i++) {
            cin >> seats[i];
        }
        Solution obj;
        if (obj.is_possible_to_get_seats(n, m, seats)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}

// } Driver Code Ends