class Solution {
public:
    void func(int n,int i,int open,int close,string &s,vector<string>&ans)
    {
        if(i==(2*n))
        {
            ans.push_back(s);
            return;
        }
        if(open==close)
        {
            s.push_back('(');
            func(n,i+1,open+1,close,s,ans);
            s.pop_back();
        }  
        else
        {
            if(open<n)
            {
                s.push_back('(');
                func(n,i+1,open+1,close,s,ans);
                s.pop_back();
            }
            s.push_back(')');
            func(n,i+1,open,close+1,s,ans);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s="";
        int i=0;
        int open=0;
        int close=0;
        func(n,i,open,close,s,ans);
        return ans;
    }
};