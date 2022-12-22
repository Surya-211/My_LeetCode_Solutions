class Solution {
    public int largestAltitude(int[] gain) {
        int max=0;
        int val=0;
        for(int i=0;i<gain.length;i++)
        {
            val+=gain[i];
            if(val>max)
            {
                max=val;
            }
        }
        return max;
    }
}