class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m=INT_MIN;
        int i=0;
        int j=nums.size()-1;
        while(i<=j)
        {
            m=max(m,nums[i]+nums[j]);
            i++;
            j--;
        }
        return m;
    }
};