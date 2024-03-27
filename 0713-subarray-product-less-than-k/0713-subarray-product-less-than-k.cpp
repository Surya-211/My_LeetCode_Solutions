class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int count=0;
        long long pro=1;
        while(j<nums.size())
        {
            pro*=nums[j];
            if(pro<k)
            {
                count+=j-i+1;
                j++;
                continue;
            }
            while(i<nums.size() && i<=j && pro>=k)
            {
                pro/=nums[i];
                i++;
            }
            if(pro<k)
                count+=j-i+1;
            j++;
        }
        return count;
    }
};