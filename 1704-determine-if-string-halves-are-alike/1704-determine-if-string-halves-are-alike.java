class Solution {
    public boolean halvesAreAlike(String s) {
        
        String vowel="aeiouAEIOU";
        int count1=0;
        int count2=0;
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            if(vowel.indexOf(ch)>-1)
            {
                if(i<s.length()/2)
                    count1++;
                else
                    count2++;
            }
        }
        if(count1==count2)
            return true;
        else
            return false;
        
        
    }
}