class Solution {
public:
    string reformat(string s) {
        int c1=0;
        int c2=0;
        string str1="";
        string str2="";
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(isdigit(ch))
            {
                str1=str1+ch;
                c1++;
            }
            else
            {
                str2=str2+ch;
                c2++;
            }
        }
        if(abs(c1-c2)<2)
        {
            string str="";
            int k=0;
            int j=0;
            for(int i=0;i<s.size();i+=2)
            {
                if(c1>c2)
                {
                    str=str+str1[j++];
                    if(k<c2)
                    str=str+str2[k++];
                }
                else
                {
                    str=str+str2[j++];
                    if(k<c1)
                    str=str+str1[k++];
                }
            }
            return str;
        }
        else
            return "";
    }
};