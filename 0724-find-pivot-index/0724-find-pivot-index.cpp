class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        int lsum=0;
        int rsum=sum;
        for(int i=0;i<nums.size();i++)
        {
            if(lsum==(rsum-nums[i]-lsum))
                return i;
            lsum+=nums[i];
        }
        return -1;
    }
};