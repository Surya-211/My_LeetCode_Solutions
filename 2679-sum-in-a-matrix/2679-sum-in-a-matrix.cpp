class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        
        for(int i=0;i<nums.size();i++)
        {
            sort(nums[i].begin(),nums[i].end());
        }
        int sum=0;
        for(int i=0;i<nums[0].size();i++)
        {
            int maxi=INT_MIN;
            for(int j=0;j<nums.size();j++)
            {
                int n=nums[j][i];
                maxi=max(maxi,n);
            }
            sum+=maxi;
        }
        return sum;
    }
};