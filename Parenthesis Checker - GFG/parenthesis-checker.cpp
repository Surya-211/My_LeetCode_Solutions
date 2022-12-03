//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char>s;
        int flag=1;
        for(int i=0;i<x.size();i++)
        {
            char ch=x[i];
            if(ch=='('||ch=='{'||ch=='[')
            s.push(ch);
            else
            {
                if(s.size()!=0)
                {
                if((ch==')'&&s.top()!='(') || (ch=='}'&&s.top()!='{') || (ch==']'&&s.top()!='['))
                {
                    flag=0;
                    break;
                }
                }
                else
                {
                    flag=0;
                    break;
                }
                s.pop();
            }
        }
        if(flag==0 || s.size()!=0)
        return false;
        else
        return true;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends