class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>v;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto i:m)
        {
            if(i.second==2)
                v.push_back(i.first);
        }
        return v;
    }
};