//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		int count=1;
 		int j=1;
 		int rs=0;
 		int re=n-1;
 		int cs=0;
 		int ce=m-1;
 		while(j<=n*m)
 		{
 		    for(int i=cs;i<=ce;i++)
 		    {
 		        if(count==k)
 		        return a[rs][i];
 		        j++;
 		        count++;
 		    }
 		    rs++;
 		    
 		    for(int i=rs;i<=re;i++)
 		    {
 		        if(count==k)
 		        return a[i][ce];
 		        j++;
 		        count++;
 		    }
 		    ce--;
 		    for(int i=ce;i>=cs;i--)
 		    {
 		        if(count==k)
 		        return a[re][i];
 		        count++;
 		        j++;
 		    }
 		    re--;
 		    for(int i=re;i>=rs;i--)
 		    {
 		        if(count==k)
 		        return a[i][cs];
 		        count++;
 		        j++;
 		    }
 		    cs++;
 		}
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends