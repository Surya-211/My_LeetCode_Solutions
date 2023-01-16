class Solution {
public:
    int climbStairs(int n) {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        int one=1;
        int two=2;
        int total=0;
        int i=2;
        while(i<n)
        {
            total=one+two;
            one=two;
            two=total;
            i++;
        }
        return total;
    }
};