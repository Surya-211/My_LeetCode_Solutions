class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even=0;
        int odd=0;
        int i=0;
        vector<int>v;
        while(n>0)
        {
            if((n&1)==1)
            {
                if(i%2==0)
                    even++;
                else
                    odd++;
            }
            n=n>>1;
            i++;
        }
        v.push_back(even);
        v.push_back(odd);
        return v;
    }
};