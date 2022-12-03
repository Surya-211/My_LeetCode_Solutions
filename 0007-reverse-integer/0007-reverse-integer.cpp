class Solution {
public:
    int reverse(int x) {
        int nx=0;
        int n=0;
        while(x!=0)
        {
            if(nx>INT_MAX/10 || nx<INT_MIN/10)
                return 0;
            nx=nx*10+x%10;
            x/=10;
        }
        return nx;
    }
};