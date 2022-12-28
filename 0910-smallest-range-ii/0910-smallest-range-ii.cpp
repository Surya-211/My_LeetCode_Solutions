class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int s=nums.size();
        int res=nums[s-1]-nums[0];
        int left=nums[0]+k;
        int right=nums[s-1]-k;
        for(int i=0;i<s-1;i++)
        {
            int maxi=max(right,nums[i]+k);
            int mini=min(left,nums[i+1]-k);
            res=min(res,maxi-mini);
        }
        return res;
    }
};