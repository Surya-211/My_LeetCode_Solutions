class Solution {
    public int countVowelSubstrings(String word) {
        
        int count=0;
        for(int i=0;i<word.length();i++)
        {
            for(int j=i+1;j<=word.length();j++)
            {
                String str=word.substring(i,j);
                int a=0;
                int e=0;
                int ii=0;
                int o=0;
                int u=0;
                int other=0;
                for(int k=0;k<str.length();k++)
                {
                    char ch=str.charAt(k);
                    if(ch=='a')
                        a=1;
                    else if(ch=='e')
                        e=1;
                    else if(ch=='i')
                        ii=1;
                    else if(ch=='o')
                        o=1;
                    else if(ch=='u')
                        u=1;
                    else
                        other=1;
                }
                if(a==1&&e==1&&ii==1&&o==1&&u==1&&other==0)
                    count++;
            }
        }
        return count;
    }
}