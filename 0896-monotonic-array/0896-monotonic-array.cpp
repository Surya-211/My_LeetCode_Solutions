class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int inc=0;
        int dec=-1;
        for(int i=1;i<nums.size();i++)
        {
            if(inc==dec)
                return false;
            if(nums[i]>nums[i-1])
            {
                inc=1;
            }
            if(nums[i]<nums[i-1])
            {
                dec=1;
            }
            
        }
        if(inc==dec)
            return false;
        return true;
    }
};