class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int low=0;
        int same=0;
        int high=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
                low++;
            else if(nums[i]==pivot)
                same++;
            else
                high++;
        }
        high=low+same;
        same=low;
        low=0;
        vector<int>v(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
                v[low++]=nums[i];
            else if(nums[i]==pivot)
                v[same++]=nums[i];
            else
                v[high++]=nums[i];
        }
        return v;
    }
};