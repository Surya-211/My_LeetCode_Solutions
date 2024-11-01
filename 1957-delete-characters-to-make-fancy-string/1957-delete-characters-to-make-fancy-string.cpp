class Solution {
public:
    string makeFancyString(string s) {
        int count=1;
        string str="";
        str+=s[0];
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
            {
                count++;
                if(count<3)
                    str+=s[i];
            }
            else
            {
                str+=s[i];
                count=1;
            }
        }
        return str;
    }
};