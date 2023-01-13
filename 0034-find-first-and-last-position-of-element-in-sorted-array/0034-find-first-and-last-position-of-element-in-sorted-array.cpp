class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
          vector<int>v;
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                int left=mid-1;
                while(left>=0&&nums[left]==target)
                {
                    left--;
                }
                v.push_back(left+1);
                int right=mid+1;
                while(right<=nums.size()-1&&nums[right]==target)
                {
                    right++;
                }
                v.push_back(right-1);
                break;
            }
            else if(nums[mid]>target)
                high=mid-1;
            else
                low=mid+1;
        }
        if(v.size()==0)
        {
            v.push_back(-1);
            v.push_back(-1);
        }
        return v;
    }
};