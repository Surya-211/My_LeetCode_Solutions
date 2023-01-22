class Solution {
public:
    string removeDuplicates(string str) {
        stack<char>s;
        for(int i=0;i<str.size();i++)
        {
            char ch=str[i];
            if(s.empty()==true)
            {
                s.push(ch);
                continue;
            }
            if(ch==s.top())
            {
                s.pop();
                continue;
            }
            else
                s.push(str[i]);
        }
        string st;
        while(!s.empty())
        {
            st.push_back(s.top());
            s.pop();
        }
        reverse(st.begin(),st.end());
        return st;
    }
};