class Solution {
public:
    int numSteps(string s) {
        int carry=0;
        int count=0;
        for(int i=s.size()-1;i>0;i--)
        {
            if(s[i]=='0' && carry==0)
            {
                count++;
            }
            else if(s[i]=='0' && carry==1)
            {
                count+=2;
                carry=1;
            }
            else if(s[i]=='1' && carry==0)
            {
                count+=2;
                carry=1;
            }
            else if(s[i]=='1' && carry==1)
            {
                count++;
                carry=1;
            }
        }
        if(carry==1)
            count++;
        return count;
    }
};