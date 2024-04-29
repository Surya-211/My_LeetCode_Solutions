class Solution {
public:
    string removeOuterParentheses(string s) {
        int open=0;
        int close=0;
        int start=0;
        string str="";
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ch=='(')
                open++;
            else
                close++;
            if(open==close)
            {
                str+=s.substr(start+1,i-start-1);
                start=i+1;
                open=0;
                close=0;
            }
        }
        return str;
    }
};