class Solution {
    public String customSortString(String order, String s) {
        
        String nstr="";
        for(int i=0;i<order.length();i++)
        {
            char ch=order.charAt(i);
            while(s.indexOf(ch)>-1)
            {
                nstr+=ch;
                int ind=s.indexOf(ch);
                s=s.substring(0,ind)+s.substring(ind+1);
            }
        }
        nstr+=s;
        return nstr;
        
    }
}