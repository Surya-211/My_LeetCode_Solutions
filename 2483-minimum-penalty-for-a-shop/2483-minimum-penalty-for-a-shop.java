class Solution {
    public int bestClosingTime(String customers) {
        int len=customers.length();
        int arr[]=new int[len];
        int nn=0;
        int ny=0;
        for(int i=0;i<len;i++)
        {
            char ch=customers.charAt(i);
            if(ch=='N')
                nn++;
            else
                ny++;
        }
        int ind=len;
        int y=0;
        int ppen=nn;
        for(int i=len-1;i>=0;i--)
        {
            int pen=0;
            char ch=customers.charAt(i);
            if(ch=='N')
            {
                nn--;
                pen=nn+y;
            }
            else
            {
                y++;
                pen=nn+y;
            }
            if(pen<=ppen)
            {
                ind=i;
                ppen=pen;
            }
        }
        return ind;
    }
}