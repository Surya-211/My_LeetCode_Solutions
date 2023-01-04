class Solution {
public:
    int countDigits(int num) {
        
        int cnum=num;
        int count=0;
        while(cnum>0)
        {
            int dig=cnum%10;
            if(num%dig==0)
                count++;
            cnum/=10;
        }
        return count;
        
    }
};