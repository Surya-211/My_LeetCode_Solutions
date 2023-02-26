class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        
        int lsum=0;
        int rsum=0;
        for(int i=0;i<nums.size();i++)
        {
            rsum+=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            rsum-=nums[i];
            int n=nums[i];
            nums[i]=abs(lsum-rsum);
            lsum+=n;
        }
        return nums;
    }
};