class Solution {
public:
    int minStartValue(vector<int>& nums) {
        
        int sum=0;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            mini=min(mini,sum);
        }
        if(mini>0)
            return 1;
        return 1-mini;
    }
};