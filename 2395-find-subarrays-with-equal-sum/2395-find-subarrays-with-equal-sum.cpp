class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        
        unordered_map<int,int>m;
        int sum=nums[0]+nums[1];
        m[sum]++;
        sum-=nums[0];
        for(int i=2;i<nums.size();i++)
        {
            sum+=nums[i];
            m[sum]++;
            sum-=nums[i-1];
        }
        for(auto i:m)
        {
            if(i.second>=2)
                return true;
        }
        return false;
    }
};