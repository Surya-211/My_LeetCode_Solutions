class Solution {
public:
    int balancedStringSplit(string s) {
        
        int count=0;
        int i=0;
        int r=0;
        int l=0;
        while(i<s.size())
        {
           if(s[i]=='R')
                r++;
            else
                l++;
            if(r==l)
            {
                count++;
                r=0;
                l=0;
            }   
            i++;
        }
        return count;
    }
};