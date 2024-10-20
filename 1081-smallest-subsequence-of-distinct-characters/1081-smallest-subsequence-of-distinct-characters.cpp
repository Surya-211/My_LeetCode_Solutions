class Solution {
public:
    string smallestSubsequence(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        stack<char>st;
        vector<int>v(26,0);
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            m[ch]--;
            if(v[ch-'a']==1)
                continue;
            if(st.empty())
            {
                st.push(ch);
                v[ch-'a']=1;
            }
            else
            {
                while(!st.empty() && ch<st.top() && m[st.top()]>0)
                {
                    v[st.top()-'a']=0;
                    st.pop();
                }
                st.push(ch);
                v[ch-'a']=1;  
            }
        }
        string str="";
        while(!st.empty())
        {
            str=st.top()+str;
            st.pop();
        }
        return str;
    }
};