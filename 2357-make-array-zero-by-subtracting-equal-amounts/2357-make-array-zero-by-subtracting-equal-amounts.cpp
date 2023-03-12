class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int count=0;
        int min=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                count++;
                for(int j=i+1;j<nums.size();j++)
                {
                    nums[j]-=nums[i];
                }
            }
        }
        return count;
    }
};