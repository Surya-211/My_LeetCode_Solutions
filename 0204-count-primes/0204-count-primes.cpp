class Solution {
public:
    int countPrimes(int n) {
        
        vector<int>v(n,1);
        int count=0;
        for(int i=2;i<n;i++)
        {
            if(v[i]==0)
                continue;
            else
            {
                count++;
                for(int j=2*i;j<n;j+=i)
                    v[j]=0;
            }
        }
        return count;
    }
};