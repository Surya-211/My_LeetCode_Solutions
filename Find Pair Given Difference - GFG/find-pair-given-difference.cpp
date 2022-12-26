//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    //code
    unordered_map<int,int>m;
    for(int i=0;i<size;i++)
    {
        m[arr[i]]++;
    }
    int flag=0;
    for(int i=0;i<size;i++)
    {
       int diff=abs(n-arr[i]);
       if(diff==arr[i])
       {
           if(m[arr[i]]>1)
           {
               flag=1;
               break;
           }
       }
       else
       {
           if(m[diff]>0)
           {
               flag=1;
               break;
           }
       }
    }
    if(flag==1)
    return true;
    return false;
}