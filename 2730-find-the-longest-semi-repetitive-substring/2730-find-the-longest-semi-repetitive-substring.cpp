class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        int len=0;
        int count=0;
        int j=0;
        int i;
        for(i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
                count++;
            if(count>1)
            {
                int l=i-j;
                len=max(len,l);
                if(s[j]==s[j+1])
                    count--;
                j++;
            }
        }
        len=max(len,i-j);
        return len;
    }
};