class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int valid=1;
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(ch=='('||ch=='{'||ch=='[')
                st.push(ch);
            else if(ch==')')
            {
                if(!st.empty()&&st.top()=='(')
                    st.pop();
                else
                {
                    valid=0;
                    break;
                }
            }
            else if(ch=='}')
            {
                if(!st.empty()&&st.top()=='{')
                    st.pop();
                else
                {
                    valid=0;
                    break;
                }
            }
            else if(ch==']')
            {
                if(!st.empty()&&st.top()=='[')
                    st.pop();
                else
                {
                    valid=0;
                    break;
                }
            }
        }
        if(st.empty()&&valid==1)
            return true;
        else
            return false;
    }
};