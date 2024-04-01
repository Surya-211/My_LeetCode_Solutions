class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        long long count=0;
        if(nums.size()==1)
            return 1;
        long long c=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
                c++;
                continue;
            }
            count+=(c+1)*(c+2)/2;
            c=0;
        }
        count+=(c+1)*(c+2)/2;
        return count;
    }
};