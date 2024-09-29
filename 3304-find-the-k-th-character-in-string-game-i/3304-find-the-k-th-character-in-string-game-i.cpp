class Solution {
public:
    char kthCharacter(int k) {
        string str="a";
        while(str.size()<k)
        {
            string nstr="";
            for(int i=0;i<str.size();i++)
            {
                char ch=str[i];
                char ch1=ch+1;
                if(ch=='z')
                    ch1='a';
                nstr=nstr+ch+ch1;
            }
            str=nstr;
        }
        return str[k-1];
    }
};