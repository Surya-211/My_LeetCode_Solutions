class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
        int arr_sum=0;
        int dig_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            arr_sum+=nums[i];
            int n=nums[i];
            while(n>0)
            {
                dig_sum+=n%10;
                n/=10;
            }
        }
        return abs(arr_sum-dig_sum);
    }
};