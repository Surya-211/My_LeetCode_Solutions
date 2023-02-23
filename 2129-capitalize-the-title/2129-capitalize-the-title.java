class Solution {
    public String capitalizeTitle(String title) {
        
        title=title+" ";
        String word="";
        String nstr="";
        for(int i=0;i<title.length();i++)
        {
            char ch=title.charAt(i);
            if(ch!=' ')
            {
                word+=ch;
                continue;
            }
            if(word.length()>2)
            {
                char c=Character.toUpperCase(word.charAt(0));
                word=word.substring(1);
                word=word.toLowerCase();
                nstr=nstr+c+word+" ";
            }
            else
            {
                word=word.toLowerCase();
                nstr=nstr+word+" ";
            }
            word="";
        }
        nstr=nstr.substring(0,nstr.length()-1);
        return nstr;
    }
}