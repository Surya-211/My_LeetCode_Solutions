class Solution {
public:
    
    int mod=1000000007;
    
    int numPrimeArrangements(int n) {
        
        if(n==1)
            return 1;
        int c=0;
        for(int i=2;i<=n;i++)
        {
            int flag=1;
            for(int j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                c++;
            }
        }
        long long ans=(factorial(c)%mod*factorial(n-c)%mod)%mod;
        return ans;
    }
    
    long long factorial(int n)
    {
        if(n==0||n==1)
            return 1;
        
        return (n*(factorial(n-1)%mod))%mod;
    }
    
};