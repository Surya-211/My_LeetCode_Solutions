class Solution {
    public String reorderSpaces(String text) {
        
        int count=0;
        int words=0;
        for(int i=0;i<text.length();i++)
        {
            char ch=text.charAt(i);
            if(ch==' ')
            {
                count++; 
            }
            else
            {
                if(i==0)
                    words++;
                else if(i>0)
                {
                    char ch1=text.charAt(i-1);
                    if(ch1==' ')
                        words++;
                }
            }
        }
        int s=0;
        int left=0;
        if(words==1)
        {
            s=0;
            left=count;
        }
        else
        {
            s=count/(words-1);
            left=count%(words-1);
        }
        String nstr="";
        String word="";
        text=text.trim();
        for(int i=0;i<text.length();i++)
        {
            char ch=text.charAt(i);
            if(ch!=' ')
            {
                word+=ch;
                continue;
            }
            else if(text.charAt(i-1)!=' ')
            {
                nstr+=word;
                for(int j=0;j<s;j++)
                    nstr+=" ";
            
                 word="";
            }
            
        }
        nstr+=word;
        for(int i=0;i<left;i++)
            nstr+=" ";
        return nstr;
    }
}