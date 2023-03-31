class Solution {
    public int divisorSubstrings(int num, int k) {
        
        int count=0;
        
        String s=Integer.toString(num);
        
        for(int i=0;i<=s.length()-k;i++)
        {
            String str=s.substring(i,i+k);
            int n=Integer.valueOf(str);
            if(n!=0)
            if(num%n==0)
                count++;
        }
        return count;
        
    }
}