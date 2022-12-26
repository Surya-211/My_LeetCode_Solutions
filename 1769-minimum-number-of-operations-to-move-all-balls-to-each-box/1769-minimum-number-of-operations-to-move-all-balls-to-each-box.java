class Solution {
    public int[] minOperations(String boxes) {
        int n=boxes.length();
        int a[]=new int[n];
        int ind=0;
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(i==j)
                    continue;
                char ch=boxes.charAt(j);
                if(ch=='1')
                    count+=Math.abs(i-j);
            }
            a[ind++]=count;
        }
        return a;
    }
}