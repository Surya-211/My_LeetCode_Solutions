class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int count=0;
        int left=0;
        for(auto i:m)
        {
            count+=i.second/2;
            left+=i.second%2;
        }
        return {count,left};
    }
};