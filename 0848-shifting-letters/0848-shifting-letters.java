class Solution {
    public String shiftingLetters(String s, int[] shifts) {
        
        long a[]=new long[shifts.length];
        long sum=0;
        for(int j=shifts.length-1;j>=0;j--)
        {
            sum+=shifts[j];
            a[j]=sum%26;
        }
        String nstr="";
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            long n=(long)ch;
            n=n+a[i];
            long z=(long)'z';
            while(n>z)
                n-=26;
            char c=(char)n;
            nstr+=c;
        }
        return nstr;
    }
}