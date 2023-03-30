class Solution {
public:
    int alternateDigitSum(int n) {
        
        int i=1;
        int sum=0;
        int cn=n;
        int rev=0;
        while(cn>0)
        {
            rev=rev*10+cn%10;
            cn/=10;
        }
        while(rev>0)
        {
            int dig=rev%10;
            sum+=i*dig;
            i*=-1;
            rev/=10;
        }
        return sum;
    }
};