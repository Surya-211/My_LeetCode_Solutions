class Solution {
public:
    
    double power(double x,long n)
    {
        if(n==0)
            return 1;
        if(n<0)
        {
            n=-1*n;
            x=1/x;
        }
        if(n%2==0)
            return power(x*x,n/2);
        else
            return x*power(x*x,n/2);
    }
    
    double myPow(double x, int n) {
        
        return power(x,n);
        
    }
};