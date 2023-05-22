class Solution {
public:
    string makeSmallestPalindrome(string s) {
        
        for(int i=0,j=s.size()-1;i<j;i++,j--)
        {
            char ch1=s[i];
            char ch2=s[j];
            if(ch1-ch2<=0)
            {
                s[i]=ch1;
                s[j]=ch1;
            }
            else
            {
                s[i]=ch2;
                s[j]=ch2;
            }
        }
        return s;
    }
};