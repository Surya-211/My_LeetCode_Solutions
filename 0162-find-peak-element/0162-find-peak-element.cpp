class Solution {
public:
    int ind=-1;
    int findPeakElement(vector<int>& nums) {
        
        int low=0;
        int high=nums.size()-1;
        if(nums.size()==1)
            return 0;
        binarySearch(nums,low,high);
        return ind;
        
    }
    void binarySearch(vector<int>arr,int low,int high)
    {
        if(low<=high)
        {
            int mid=(low+high)/2;
            if(mid==0)
            {
                if(arr[mid]>arr[mid+1])
                {
                    ind=mid;
                    return;
                }
            }
            else if(mid==arr.size()-1)
            {
                if(arr[mid]>arr[mid-1])
                {
                    ind=mid;
                    return;
                }
            }
            else if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1])
                {
                    ind=mid;
                    return;
                }
            binarySearch(arr,low,mid-1);
            binarySearch(arr,mid+1,high);
        }
    }
};