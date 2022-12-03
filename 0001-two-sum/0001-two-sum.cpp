class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        unordered_map<int,int>m;
        m[nums[0]]=0;
        for(int i=1;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                v.push_back(i);
                v.push_back(m[target-nums[i]]);
                break;
            }
            else
            {
                m[nums[i]]=i;
            }
        }
        return v;
    }
};