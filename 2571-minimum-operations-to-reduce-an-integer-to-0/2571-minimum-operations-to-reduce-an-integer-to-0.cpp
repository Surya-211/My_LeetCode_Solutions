class Solution {
public:
    int minOperations(int n) {
        
        int count=0;
        
        while(n>0)
        {
            int i=0;
            int p=(int)pow(2,i);
            while(p<=n)
            {
                i++;
                p=(int)pow(2,i);
            }
            int low=(int)pow(2,i-1);
            int high=p;
            int low_diff=n-low;
            int high_diff=high-n;
            n=min(low_diff,high_diff);
            count++;
        }
        return count++;
    }
};