class Solution {
    public int minLength(String s) {
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            s=s.replace("AB","");
            s=s.replace("CD","");
        }
        return s.length();
        
    }
}