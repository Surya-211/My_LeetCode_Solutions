class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                nums[k]=nums[i];
                k++;
            }
        }
        for(int i=k;i<nums.size();i++)
        {
            nums[i]=0;
        }
        return nums;
    }
};