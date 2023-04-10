class Solution {
    public String[] findWords(String[] words) {
        
        String s1="qwertyuiopQWERTYUIOP";
        String s2="asdfghjklASDFGHJKL";
        String s3="zxcvbnmZXCVBNM";
        
        ArrayList<String> l=new ArrayList<>();
        int k=0;
        for(int i=0;i<words.length;i++)
        {
            int a=0;
            int b=0;
            int c=0;
            String str=words[i];
            for(int j=0;j<str.length();j++)
            {
                char ch=str.charAt(j);
                if(s1.indexOf(ch)>-1)
                    a++;
                else if(s2.indexOf(ch)>-1)
                    b++;
                else
                    c++;
            }
            if(a>0 && b==0 && c==0)
                l.add(str);
            else if(b>0 && a==0 && c==0)
                l.add(str);
            else if(c>0 && a==0 && b==0)
                l.add(str);
        }
        String arr[]=new String[l.size()];
        l.toArray(arr);
        return arr;
    }
}