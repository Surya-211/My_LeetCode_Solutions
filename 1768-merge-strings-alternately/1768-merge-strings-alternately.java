class Solution {
    public String mergeAlternately(String word1, String word2) {
        int i=0;
        int j=0;
        String nstr="";
        while(i<word1.length()&&j<word2.length())
        {
            char ch1=word1.charAt(i);
            char ch2=word2.charAt(j);
            nstr=nstr+ch1+ch2;
            i++;
            j++;
        }
        while(i<word1.length())
        {
            nstr+=word1.charAt(i);
            i++;
        }
        while(j<word2.length())
        {
            nstr+=word2.charAt(j);
            j++;
        }
        return nstr;
    }
}