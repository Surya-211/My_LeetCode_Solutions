class Solution {
public:
    string findLatestTime(string s) {
        string str="";
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ch!='?')
            {
                str+=ch;
                continue;
            }
            if(i==0)
            {
                if(s[1]=='?' || s[1]=='1' || s[1]=='0')
                    str+='1';
                else
                    str+='0';
            }
            else if(i==1)
            {
                if(s[0]=='?' || s[0]=='1')
                    str+='1';
                else
                    str+='9';
            }
            else if(i==3)
                str+='5';
            else
                str+='9';
        }
        return str;
    }
};