class Solution {
    public String[] findOcurrences(String text, String first, String second) {
        
        String f="";
        String s="";
        String t="";
        String word="";
        text=text+" ";
        List<String>arr=new ArrayList<>();
        for(int i=0;i<text.length();i++)
        {
            char ch=text.charAt(i);
            if(ch!=' ')
            {
                word+=ch;
                continue;
            }
            if(f.length()==0)
            {
                f=word;
                word="";
                continue;
            }
            else if(s.length()==0)
            {
                s=word;
                word="";
                continue;
            }
            if(f.equals(first)&&s.equals(second))
                arr.add(word);
            f=s;
            s=word;
            word="";
        }
        String a[]=new String[arr.size()];
        for(int i=0;i<arr.size();i++)
        {
            a[i]=arr.get(i);
        }
        return a;
    }
}