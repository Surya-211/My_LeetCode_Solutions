class Solution {
    public String replaceDigits(String s) {
        
        String nstr="";
        for(int i=1;i<s.length();i+=2)
        {
            char ch=s.charAt(i-1);
            int n=(int)s.charAt(i);
            nstr+=ch;
            n=n+ch-48;
            char c=(char)n;
            nstr+=c;
        }
        if(s.length()%2!=0)
            nstr+=s.charAt(s.length()-1);
        return nstr;
    }
}