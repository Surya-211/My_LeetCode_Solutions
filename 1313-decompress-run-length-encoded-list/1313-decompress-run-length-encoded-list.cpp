class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        vector<int>v;
        for(int i=1;i<nums.size();i+=2)
        {
            int freq=nums[i-1];
            int val=nums[i];
            for(int j=1;j<=freq;j++)
            {
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};