class Solution {
    public String firstPalindrome(String[] words) {
        
        String str="";
        for(int i=0;i<words.length;i++)
        {
            String s=words[i];
            boolean palin=true;
            for(int j=0,k=s.length()-1;j<=k;j++,k--)
            {
                if(s.charAt(j)!=s.charAt(k))
                    palin=false;
            }
            if(palin==true)
            {
                str=s;
                break;
            }
        }
        return str;
        
    }
}