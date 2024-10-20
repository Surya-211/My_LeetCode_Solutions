class Solution {
public:
    string reverse(string str)
    {
        for(int i=0,j=str.size()-1;i<=j;i++,j--)
        {
            char ch=str[i];
            str[i]=str[j];
            str[j]=ch;
            if(str[i]=='0')
                str[i]='1';
            else
                str[i]='0';    
            if(i!=j)
            {
                if(str[j]=='0')
                    str[j]='1';
                else
                    str[j]='0';
            }
        }
        return str;
    }
    char findKthBit(int n, int k) {
        string str="0";
        if(k<=str.size())
        {
            return str[k-1];
        }
        while(str.size()<=k)
        {
            str=str+"1"+reverse(str);
        }
        return str[k-1];
    }
};