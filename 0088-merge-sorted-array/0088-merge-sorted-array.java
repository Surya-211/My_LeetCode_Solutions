class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int i=0;
        int j=0;
        
        int num[]=new int[m+n];
        int k=0;
        
        while(i<m&&j<n)
        {
            if(nums1[i]<=nums2[j])
            {
                num[k]=nums1[i];
                i++;
                k++;
            }
            else
            {
                num[k]=nums2[j];
                j++;
                k++;
            }
        }
        
        while(i<m)
        {
            num[k]=nums1[i];
            i++;
            k++;
        }
        
        while(j<n)
        {
            num[k]=nums2[j];
            j++;
            k++;
        }
        
        for(int b=0;b<m+n;b++)
            nums1[b]=num[b];
    }
}