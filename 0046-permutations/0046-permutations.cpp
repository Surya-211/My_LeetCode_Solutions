class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        helper(nums,ans,v);
        return ans;
    }
    void helper(vector<int>&nums,vector<vector<int>>&ans,vector<int>&v)
    {
        if(v.size()==nums.size())
        {
            ans.push_back(v);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(find(v.begin(),v.end(),nums[i])==v.end())
            {
                v.push_back(nums[i]);
                helper(nums,ans,v);
                v.pop_back();
            }
        }
    }
};