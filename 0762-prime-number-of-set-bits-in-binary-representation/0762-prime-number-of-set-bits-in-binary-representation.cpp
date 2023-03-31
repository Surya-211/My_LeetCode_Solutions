class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        
        int count=0;
        for(int i=left;i<=right;i++)
        {
            int n=i;
            int c=0;
            while(n>0)
            {
                int dig=n%2;
                if(dig==1)
                    c++;
                n/=2;
            }
            int flag=1;
            if(c==1)
                flag=0;
            for(int j=2;j<=c/2;j++)
            {
                if(c%j==0)
                {
                   flag=0;
                    break;
                }   
            }
            if(flag==1)
               count++;
        }
        return count;
        
    }
};