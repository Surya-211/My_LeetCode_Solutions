class Solution {
    public String freqAlphabets(String s) {
        
        while(s.indexOf('#')>-1)
        {
            int ind=s.indexOf('#');
            String str=s.substring(ind-2,ind);
            int n=Integer.parseInt(str);
            char ch=(char)(97+n-1);
            s=s.substring(0,ind-2)+ch+s.substring(ind+1);
        }
        String nstr="";
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            if(Character.isDigit(ch))
            {
                int n=ch-48;
                char c=(char)(97+n-1);
                nstr+=c;
            }
            else
                nstr+=ch;
        }
        return nstr;
        
    }
}