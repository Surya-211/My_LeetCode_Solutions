class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int cx=x;
        while(cx>0)
        {
            sum+=cx%10;
            cx/=10;
        }
        if(x%sum==0)
            return sum;
        else
            return -1;
    }
};