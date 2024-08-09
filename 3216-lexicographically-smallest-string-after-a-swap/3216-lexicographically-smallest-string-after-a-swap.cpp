class Solution {
public:
    string getSmallestString(string s) {
        for(int i=1;i<s.size();i++)
        {
            if(s[i]<s[i-1])
            {
                int a=s[i];
                int b=s[i-1];
                if((a%2==0 && b%2==0) || (a%2!=0 && b%2!=0))
                {
                    char ch=s[i];
                    s[i]=s[i-1];
                    s[i-1]=ch;
                    return s;
                }
            }
        }
        return s;
    }
};