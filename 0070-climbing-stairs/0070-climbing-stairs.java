class Solution {
    public int climbStairs(int n) {
    int a=1;
        int b=2;
        int t=0;
                if(n==1)
                    return 1;
        else if(n==2)
            return 2;
        

        
        for(int i=3;i<=n;i++)
        {
            
            t=a+b;
            a=b;
            b=t;
            
        }
        return t;
    }
}