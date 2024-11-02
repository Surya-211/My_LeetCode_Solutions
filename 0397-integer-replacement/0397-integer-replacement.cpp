class Solution {
public:
    long func(long n,unordered_map<long,long>&m)
    {
        if(n==1)
            return 0;
        if(m.find(n)!=m.end())
            return m[n];
        if(n%2==0)
            return m[n]=1+func(n/2,m);
        else
            return m[n]=1+min(func(n+1,m),func(n-1,m));
    }
    int integerReplacement(int n) {
        unordered_map<long,long>m;
        return func(n,m);
    }
};