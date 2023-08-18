//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>v;
        priority_queue<int>q;
        q.push(a[n-1]);
        for(int i=n-1;i>=0;i--)
        {
            int num=q.top();
            if(a[i]>=num)
                v.push_back(a[i]);
            q.push(a[i]);
        }
        for(int i=0,j=v.size()-1;i<=j;i++,j--)
        {
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
        }
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends