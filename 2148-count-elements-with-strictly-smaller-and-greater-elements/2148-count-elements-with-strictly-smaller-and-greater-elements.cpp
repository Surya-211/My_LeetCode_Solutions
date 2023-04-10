class Solution {
public:
    int countElements(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int count=nums.size();
        int a=nums[0];
        int b=nums[nums.size()-1];
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==a||nums[i]==b)
                count--;
        }
        return count;
    }
};