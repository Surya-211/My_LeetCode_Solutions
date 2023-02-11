class Solution {
public:
    string sortSentence(string s) {
        
        int count=0;
        string str="";
        unordered_map<int,string>m;
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
                int n=s[i]-48;
                m[n]=str;
                count++;
                str="";
            }
            else if(s[i]==' ')
                continue;
            else
            {
                str+=s[i];
            }
                
        }
        string nstr="";
        int n=1;
        while(n<=count)
        {
            if(n<count)
                nstr=nstr+m[n]+" ";
            else
                nstr=nstr+m[n];
            n++;
        }
        return nstr;
    }
};