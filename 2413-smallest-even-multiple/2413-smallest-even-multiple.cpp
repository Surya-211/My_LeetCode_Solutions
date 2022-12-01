class Solution {
public:
    int smallestEvenMultiple(int n) {
        int small;
        int i=1;
        while(true)
        {
            int num=n*i;
            if(num%n==0&&num%2==0)
            {
                small=num;
                break;
            }
            i++;
        }
        return small;
    }
};