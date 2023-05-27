class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxi=INT_MIN;
        int sum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
            {
                sum+=nums[i];
                continue;
            }
            else
            {
                maxi=max(maxi,sum);
                sum=nums[i];
            }
        }
        maxi=max(maxi,sum);
        return maxi;
    }
};