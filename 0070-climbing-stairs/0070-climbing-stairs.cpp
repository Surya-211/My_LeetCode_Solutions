class Solution {
public:
    int climbStairs(int n) {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        int two=1;
        int one=2;
        int total=0;
        int i=2;
        while(i<n)
        {
            total=one+two;
            two=one;
            one=total;
            i++;
        }
        return total;
    }
};