class Solution {
    public boolean areNumbersAscending(String s) {
        
        s=s+" ";
        int flag=1;
        int prev=0;
        String word="";
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            if(ch!=' ')
            {
                word+=ch;
                continue;
            }
            int f=1;
            for(int j=0;j<word.length();j++)
            {
                char c=word.charAt(j);
                if(!Character.isDigit(c))
                {
                    f=0;
                    break;
                }
            }
            if(f==1)
            {
                int n=Integer.parseInt(word);
                if(n<=prev)
                {
                    flag=0;
                    break;
                }
                prev=n;
            }
            word="";
        }
        if(flag==1)
            return true;
        else
            return false;
        
    }
}