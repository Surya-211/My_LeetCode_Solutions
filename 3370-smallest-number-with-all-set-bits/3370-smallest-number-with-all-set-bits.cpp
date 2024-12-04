class Solution {
public:
    int smallestNumber(int n) {
        int num=0;
        int i=0;
        while(n>0)
        {
            num+=pow(2,i++);
            n/=2;
        }
        return num;
    }
};