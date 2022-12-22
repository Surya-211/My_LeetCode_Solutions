class Solution {
    public String truncateSentence(String s, int k) {
        int sp=0;
        int ind=-1;
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            if(ch==' ')
                sp++;
            if(sp==k)
            {
                ind=i;
                break;
            }
        }
        if(sp==k)
            return s.substring(0,ind);
        else
            return s;
    }
}