class Solution {
    public boolean isThree(int n) {
        
        int count=0;
        for(int i=1;i<=n/2;i++)
        {
            if(n%i==0)
                count++;
        }
        if(count==2)
            return true;
        else
            return false;
    }
}