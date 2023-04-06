class Solution {
    public int findTheLongestBalancedSubstring(String s) {
        
        int max=0;
        for(int i=0;i<s.length();i++)
        {
            String str="";
            for(int j=i+1;j<=s.length();j++)
            {
                str=s.substring(i,j);
                int zero=0;
                int one=0;
                int flag=0;
                int bal=1;
                for(int k=0;k<str.length();k++)
                {
                    char ch=str.charAt(k);
                    if(ch=='0'&&flag==0)
                        zero++;
                    if(ch=='0'&&flag==1)
                    {
                        bal=0;
                        break;
                    }
                    if(ch=='1')
                    {
                        if(flag==0)
                            flag=1;
                        one++;
                    }
                }
                if(bal==0)
                    continue;
                if(zero==one)
                    max=Math.max(str.length(),max);
            }
        }
        return max;
    }
}