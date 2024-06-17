class Solution {
public:
    bool judgeSquareSum(int c) {
        int n=sqrt(c);
        for(int i=n;i>=0;i--)
        {
            int nc=c-(i*i);
            int a=sqrt(nc);
            if((nc-(a*a))==0)
                return true;
        }
        return false;
    }
};