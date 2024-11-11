class Solution {
public:
    
    int func(int i,int curr_rem,vector<int>&nums,vector<vector<int>>&dp)
    {
        if(i==nums.size())
        {
            if(curr_rem==0)
                return 0;
            else
                return INT_MIN;
        }
        if(dp[i][curr_rem]!=-1)
            return dp[i][curr_rem];
        int pick=nums[i]+func(i+1,(curr_rem+nums[i])%3,nums,dp);
        int not_pick=0+func(i+1,curr_rem,nums,dp);
        return dp[i][curr_rem]=max(pick,not_pick);
    }
    
    int maxSumDivThree(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(3,-1));
        return func(0,0,nums,dp);
    }
};