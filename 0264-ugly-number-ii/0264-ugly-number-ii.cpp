class Solution {
public:
    int nthUglyNumber(int n) {
        set<long>s;
        s.insert(1);
        for(int i=1;i<n;i++)
        {
            long curr=*s.begin();
            s.erase(s.begin());
            s.insert(curr*2);
            s.insert(curr*3);
            s.insert(curr*5);
        }
        return *s.begin();
    }
};