class Solution {
public:
    int numSub(string s) {
        int mod=1e9+7;
        int sum=0;
        long long int c=0;
        s=s+'0';
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                long long int n=0;
                if(c%2==0)
                    n=c/2*(c+1)%mod;
                else
                    n=(c+1)/2*c%mod;
                sum=(sum+n)%mod;
                c=0;
            }
            else
                c++;
        }
        return sum;
    }
};