class Solution {
    public int minPartitions(String n) {
        int max=0;
        for(int i=0;i<n.length();i++)
        {
            char ch=n.charAt(i);
            if(ch-48>max)
                max=ch-48;
        }
        return max;
    }
}