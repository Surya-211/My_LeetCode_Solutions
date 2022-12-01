class Solution {
public:
    int minimumSum(int num) {
        int new1=0;
        int new2=0;
        int a[4];
        int i=0;
        while(num>0)
        {
            a[i]=num%10;
            num/=10;
            i++;
        }
        sort(a,a+4);
        new1=a[0]*10+a[2];
        new2=a[1]*10+a[3];
        return new1+new2;
    }
};