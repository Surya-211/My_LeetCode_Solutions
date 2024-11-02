class Solution {
    public boolean isCircularSentence(String sentence) {
        int flag=1;
        String word="";
        String prev="";
        sentence=sentence+" ";
        for(int i=0;i<sentence.length();i++)
        {
            char ch=sentence.charAt(i);
            if(ch!=' ')
            {
                word+=ch;
                continue;
            }
            if(prev=="")
                sentence=sentence+word+" ";
            if(prev!="")
            {
                
                char c1=prev.charAt(prev.length()-1);
                char c2=word.charAt(0);
                if(c1!=c2)
                {
                    flag=0;
                    break;
                }
            }
            prev=word;
            word="";
        }
        if(flag==1)
            return true;
        else
            return false;
    }
}