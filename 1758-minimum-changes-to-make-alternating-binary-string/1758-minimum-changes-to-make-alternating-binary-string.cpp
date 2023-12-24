class Solution {
public:
    int minOperations(string s) {
        int zero=0;
        int one=0;
        for(int i=0;i<s.size();i++)
        {
            if(i%2==0)
            {
                if(s[i]!='0')
                    zero++;
                else
                    one++;
            }
            else
            {
                if(s[i]!='1')
                    zero++;
                else
                    one++;
            }
        }
        return min(zero,one);
    }
};