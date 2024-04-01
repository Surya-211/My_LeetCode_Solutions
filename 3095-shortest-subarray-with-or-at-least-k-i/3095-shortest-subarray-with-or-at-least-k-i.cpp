class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            int ans=0;
            for(int j=i;j<nums.size();j++)
            {
                ans=ans|nums[j];
                if(ans>=k)
                {
                    mini=min(mini,j-i+1);
                }
            }
        }
        if(mini==INT_MAX)
            return -1;
        return mini;
    }
};