class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
        int even=0;
        int odd=1;
        int flag=0;
        while(even<nums.size()&&odd<nums.size())
        {
            while(nums[even]%2==0)
            {
                even+=2;
                if(even>=nums.size())
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
            while(nums[odd]%2==1)
            {
                {
                odd+=2;
                if(odd>=nums.size())
                {
                    flag=1;
                    break;
                }
            }
            }
            int temp=nums[even];
            nums[even]=nums[odd];
            nums[odd]=temp;
        }
        return nums;
    }
};