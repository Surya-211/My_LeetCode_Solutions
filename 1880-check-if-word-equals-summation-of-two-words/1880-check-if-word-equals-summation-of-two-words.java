class Solution {
    public boolean isSumEqual(String firstWord, String secondWord, String targetWord) {
        
        int s1=0;
        for(int i=0;i<firstWord.length();i++)
        {
            char ch=firstWord.charAt(i);
            int dig=ch-97;
            s1=s1*10+dig;
        }
        int s2=0;
        for(int i=0;i<secondWord.length();i++)
        {
            char ch=secondWord.charAt(i);
            int dig=ch-97;
            s2=s2*10+dig;
        }
        int s=0;
        for(int i=0;i<targetWord.length();i++)
        {
            char ch=targetWord.charAt(i);
            int dig=ch-97;
            s=s*10+dig;
        }
        if(s1+s2==s)
            return true;
        else
            return false;
    }
}