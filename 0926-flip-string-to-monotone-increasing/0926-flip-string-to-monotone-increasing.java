class Solution {
    public int minFlipsMonoIncr(String s) {
        int min=0;
        int one=0;
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            if(ch=='1')
                one++;
            else
            {
                min++;
                min=Math.min(min,one);
            }
        }
        return min;
    }
}