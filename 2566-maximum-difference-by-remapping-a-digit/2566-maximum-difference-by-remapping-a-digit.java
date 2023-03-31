class Solution {
    public int minMaxDifference(int num) {
        
        String s=Integer.toString(num);
        
        String min=s;
        char c=min.charAt(0);
        
        min=min.replace(c,'0');
        
        String max=s;
        for(int i=0;i<max.length();i++)
        {
            char ch=max.charAt(i);
            if(ch!='9')
            {
                max=max.replace(ch,'9');
                break;
            }
        }
        int mini=Integer.valueOf(min);
        int maxi=Integer.valueOf(max);
        return maxi-mini;
    }
}