class Solution {
public:
    string reverseParentheses(string s) {
        stack<string>st;
        string str="";
        int i=0;
        while(i<s.size())
        {
            while(i<s.size() && s[i]!='(' && s[i]!=')')
            {
                str+=s[i];
                i++;
            }
            if(str!="")
                st.push(str);
            if(s[i]=='(')
            {
                st.push("(");
            }
            if(s[i]==')')
            {
                string nstr="";
                while(st.top()!="(")
                {
                    nstr=st.top()+nstr;
                    st.pop();
                }
                st.pop();
                reverse(nstr.begin(),nstr.end());
                st.push(nstr);
            }
            str="";
            i++;
        }
        string nstr="";
        while(!st.empty())
        {
            nstr=st.top()+nstr;
            st.pop();
        }
        return nstr;
    }
};