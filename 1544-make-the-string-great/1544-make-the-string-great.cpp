class Solution {
public:
    string makeGood(string str) {
        stack<char>s;
        for(int i=0;i<str.size();i++)
        {
            if(s.empty())
            {
                s.push(str[i]);
                continue;
            }
            char ch=s.top();
            if(islower(str[i]))
            {
                if(ch==toupper(str[i]))
                {
                    s.pop();
                    continue;
                }
                else
                    s.push(str[i]);
            }
            else
            {
                if(ch==tolower(str[i]))
                {
                    s.pop();
                    continue;
                }
                else
                    s.push(str[i]);
            }
            
        }
        string st="";
        while(!s.empty())
        {
            st=s.top()+st;
            s.pop();
        }
        return st;
    }
};