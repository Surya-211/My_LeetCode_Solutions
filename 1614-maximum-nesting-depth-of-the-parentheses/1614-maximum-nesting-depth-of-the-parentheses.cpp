class Solution {
public:
    int maxDepth(string s) {
        
        int count=0;
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ch=='(')
            {
                st.push('(');
                int sz=st.size();
                if(sz>count)
                    count=sz;
            }
            else if(ch==')')
                st.pop();
        }
        return count;
        
    }
};