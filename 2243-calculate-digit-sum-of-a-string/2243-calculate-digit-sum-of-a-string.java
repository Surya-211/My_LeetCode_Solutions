class Solution {
    public String digitSum(String s, int k) {
        
        while(s.length()>k)
        {
            String nstr="";
            int i=0;
            int count=0;
            int sum=0;
            while(i<s.length())
            {
                char ch=s.charAt(i);
                sum+=ch-48;
                count++;
                if(count==k)
                {
                    String str=String.valueOf(sum);
                    nstr+=str;
                    sum=0;
                    count=0;
                }
                i++;
            }
            if(s.length()%k!=0)
            {
                String str=String.valueOf(sum);
                nstr+=str;
            }
            s=nstr;
        }
        return s;
    }
}