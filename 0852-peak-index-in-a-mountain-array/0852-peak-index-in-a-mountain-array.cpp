class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0;
        int high=arr.size()-1;
        int mid=0;
        while(low<=high)
        {
             mid=(low+high)/2;
             if(mid==0)
            {
                if(arr[mid]>arr[mid+1])
                    return mid;
                else
                    low=mid+1;
            }
            else if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
                return mid;
           
            else if(arr[mid]<arr[mid-1])
                high=mid-1;
            else
                low=mid+1;
        }
        return mid;
    }
};