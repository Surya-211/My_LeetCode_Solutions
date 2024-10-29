class Solution {
public:
    int kthFactor(int n, int k) {
        if(n==1 && k==1)
            return 1;
        if(n==2 && k==2)
            return 2;
        int i=1;
        set<int>s;
        while(i<=n/2)
        {
            if(n%i==0)
            {
                if(i==n/2)
                    s.insert(i);
                else
                {
                    s.insert(i);
                    s.insert(n/i);
                }
            }
            i++;
        }
        int count=1;
        for(auto j:s)
        {
            if(count==k)
                return j;
            count++;
        }
        return -1;
    }
};