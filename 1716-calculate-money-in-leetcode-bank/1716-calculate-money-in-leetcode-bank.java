class Solution {
    public int totalMoney(int n) {
        
        int sum=0;
        int s=28;
        int i=1;
        while(n>=7)
        {
            sum+=s;
            s+=7;
            n=n-7;
            i++;
        }
        for(int j=1;j<=n;j++)
        {
            sum+=i;
            i++;
        }
        return sum;
    }
}