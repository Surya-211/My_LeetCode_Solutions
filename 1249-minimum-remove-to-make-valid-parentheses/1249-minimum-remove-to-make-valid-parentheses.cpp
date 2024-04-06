class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int c=0;
        string str="";
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ch==')')
                c++;
        }
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ch=='(' && c>0 && count<c)
            {
                count++;
            }
            else if(ch=='(')
                continue;
            if(ch==')' && count>0)
            {
                c--;
                count--;
            }
            else if(ch==')')
            {
                c--;
                continue;
            }
            str+=s[i];
        }
        return str;
    }
};