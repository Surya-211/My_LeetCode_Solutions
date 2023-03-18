class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        
        int sum=0;
        for(auto i:nums)
        {
            sum+=i;
        }
        int lsum=0;
        int rsum=sum;
        for(int i=0;i<nums.size();i++)
        {
            if(lsum==rsum-nums[i])
                return i;
            else
            {
                lsum+=nums[i];
                rsum-=nums[i];
            }
        }
        return -1;
    }
};