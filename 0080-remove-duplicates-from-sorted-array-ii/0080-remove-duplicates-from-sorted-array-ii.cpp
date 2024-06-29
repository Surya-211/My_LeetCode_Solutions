class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        int ind=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[ind])
            {
                if(count<2)
                {
                    nums[++ind]=nums[i];
                    count++;
                }
            }
            else
            {
                nums[++ind]=nums[i];
                count=1;
            }
        }
        return ind+1;
    }
};