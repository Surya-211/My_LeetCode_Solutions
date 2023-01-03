class Solution {
    public boolean detectCapitalUse(String word) {
        int cap=1;
        int small=1;
        int first=1;
        for(int i=0;i<word.length();i++)
        {
            char ch=word.charAt(i);
            if(Character.isUpperCase(ch))
            {
                small=0;
                if(i>0)
                    first=0;
            }
            if(Character.isLowerCase(ch))
            {
                cap=0;
                if(i==0)
                    first=0;
            }
        }
        if(cap==1||small==1||first==1)
            return true;
        else
            return false;
    }
}