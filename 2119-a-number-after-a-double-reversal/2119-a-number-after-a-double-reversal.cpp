class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num==reverse(reverse(num)))
            return true;
        else
            return false;
    }
    
    int reverse(int num)
    {
        int n=0;
        while(num>0)
        {
            n=n*10+num%10;
            num/=10;
        }
        return n;
    }
};