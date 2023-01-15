class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int cursum=0;
        int pos=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
                pos=1;
            cursum+=nums[i];
            if(cursum<0)
            {
                cursum=0;
            }
            if(cursum>sum)
            {
                sum=cursum;
            }
        }
        if(pos==0)
        {
            sort(nums.begin(),nums.end());
            return nums[nums.size()-1];
        }
        return sum;
    }
};