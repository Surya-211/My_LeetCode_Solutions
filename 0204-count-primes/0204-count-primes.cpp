class Solution {
public:
    int countPrimes(int n) {
        
        vector<int>v;
        for(int i=0;i<=n;i++)
        {
            v.push_back(i);
        }
        for(int i=2;i<n;i++)
        {
            if(v[i]!=0)
            {
                for(int j=i+i;j<=n;j+=i)
                    v[j]=0;
            }
        }
        int count=0;
        for(int i=2;i<n;i++)
        {
            if(v[i]!=0)
                count++;
        }
        return count;
    }
};