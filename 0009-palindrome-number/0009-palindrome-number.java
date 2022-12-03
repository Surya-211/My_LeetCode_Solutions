class Solution {
    public boolean isPalindrome(int x) {
        if(x<0)
            return false;
        
        int nx=0;
        int cx=x;
        
        while(cx>0)
        {
            nx=nx*10+cx%10;
            cx/=10;
        }
        if(nx==x)
            return true;
        else 
            return false;
         
    }
}