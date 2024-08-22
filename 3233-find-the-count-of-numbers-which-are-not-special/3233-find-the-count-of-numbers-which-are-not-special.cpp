class Solution {
public:
    int nonSpecialCount(int l, int r) {
        int n=sqrt(1e9)+1;
        vector<int>prime(n,1);
        prime[0]=0;
        prime[1]=0;
        for(int i=2;i<=sqrt(r);i++)
        {
            if(prime[i]==1)
            {
                for(int j=2*i;j<=sqrt(r);j+=i)
                {
                    prime[j]=0;
                }
            }
        }
        int count=0;
        for(int i=2;i<=sqrt(r);i++)
        {
            if(prime[i]==1)
            {
                if(i*i>=l && i*i<=r)
                    count++;
            }
        }
        return r-l+1-count;
    }
};