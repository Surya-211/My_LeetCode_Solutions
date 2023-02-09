class Solution {
    public String largestOddNumber(String num) {
        
        String nstr="";
        int ind=-1;
        for(int i=num.length()-1;i>=0;i--)
        {
            char ch=num.charAt(i);
            int n=ch-48;
            if(n%2!=0)
            {
                ind=i;
                break;
            }
        }
        if(ind==-1)
            return "";
        nstr=num.substring(0,ind+1);
        return nstr;
    }
}