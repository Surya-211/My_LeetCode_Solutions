class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        int mini=nums[0]+k;
        int maxi=nums[nums.size()-1]-k;
        if(maxi<mini)
            return 0;
        return maxi-mini;
        
    }
};