class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int>m;
        for(int i=lowLimit;i<=highLimit;i++)
        {
            int sum=0;
            int n=i;
            while(n>0)
            {
                sum+=n%10;
                n/=10;
            }
            m[sum]++;
        }
        int max=0;
        for(auto i:m)
        {
            if(i.second>max)
            {
                max=i.second;
            }
        }
        return max;
    }
};