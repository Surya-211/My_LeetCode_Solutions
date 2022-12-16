class Solution {
    public boolean repeatedSubstringPattern(String s) {
        int l=s.length();
        for(int i=l/2;i>=1;i--)
        {
            if(l%i==0)
            {
                String nstr="";
                int m=l/i;
                String sub=s.substring(0,i);
                for(int j=1;j<=m;j++)
                {
                    nstr+=sub;
                }
                if(nstr.equals(s))
                    return true;
            }
        }
        return false;
    }
}