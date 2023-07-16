//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string s){
		    // Code here
		    unordered_map<char,int>m;
		    queue<char>q;
		    string str="";
		    for(int i=0;i<s.size();i++)
		    {
		        char ch=s[i];
		        m[ch]++;
		        q.push(ch);
		        while(!q.empty() && m[q.front()]!=1)
		        {
		            q.pop();
		        }
		        if(q.empty())
		            str+='#';
		        else
		        {
		            str+=q.front();
		        }
		    }
		    return str;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends