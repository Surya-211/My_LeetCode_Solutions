class Solution {
public:
    string largestOddNumber(string num) {
        string nstr="";
        int ind=-1;
        for(int i=num.size()-1;i>=0;i--)
        {
            char ch=num[i];
            int n=ch-48;
            if(n%2!=0)
            {
                ind=i;
                break;
            }
        }
        if(ind==-1)
            return "";
        nstr=num.substr(0,ind+1);
        return nstr;
    }
};