class Solution {
    public int removePalindromeSub(String s) {
       
        int palin=1;
        int i=0;
        int j=s.length()-1;
        while(i<=j)
        {
            char ch1=s.charAt(i);
            char ch2=s.charAt(j);
            if(ch1!=ch2)
            {
                palin=0;
                break;
            }
            i++;
            j--;
        }
        if(palin==1)
            return 1;
        else
            return 2;
        
    }
}