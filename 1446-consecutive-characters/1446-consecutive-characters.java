class Solution {
    public int maxPower(String s) {
        
        int max=0;
        char ch=s.charAt(0);
        int count=1;
        s=s+" ";
        for(int i=1;i<s.length();i++)
        {
            char ch1=s.charAt(i);
            if(ch1==ch)
            {
                count++;
                continue;
            }
            max=Math.max(count,max);
            count=1;
            ch=ch1;
        }
        return max;
        
    }
}