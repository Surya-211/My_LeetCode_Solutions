class Solution {
    String reverse(String str)
    {
        String nstr="";
        for(int i=0;i<str.length();i++)
        {
            char c=str.charAt(i);
            nstr=c+nstr;
        }
        return nstr;
    }
    public String reversePrefix(String word, char ch) {
        for(int i=0;i<word.length();i++)
        {
            char ch1=word.charAt(i);
            if(ch1==ch)
            {
                String s=word.substring(0,i+1);
                word=reverse(s)+word.substring(i+1);
                break;
            }
        }
        return word;
    }
}