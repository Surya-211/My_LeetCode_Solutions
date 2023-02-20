class Solution {
public:
    
    int mod=1e9+7;
    
    long long power(long long x,long long n)
    {
        if(n==0)
            return 1;
        if(n%2==0)
            return power((x*x)%mod,n/2)%mod;
        else
            return (x%mod)*(power((x*x)%mod,n/2)%mod);
    }
    
    int countGoodNumbers(long long n) {
        
        long long four=n/2;
        long long five=n-n/2;
        return power(4,four)%mod*power(5,five)%mod;
        
    }
};