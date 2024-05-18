class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int x=0;
        for(int i=0;i<nums.size();i++)
        {
            x=x^nums[i];
        }
        int maxi=pow(2,maximumBit)-1;
        vector<int>v;
        for(int i=nums.size()-1;i>=0;i--)
        {
            v.push_back(x^maxi);
            x=x^nums[i];
        }
        return v;
    }
};