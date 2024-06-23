class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int>s;
        int maxi=0;
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
            while(*s.rbegin()-*s.begin()>limit)
            {
                s.erase(s.find(nums[j++]));
            }
            int n=s.size();
            maxi=max(n,maxi);
        }
        return maxi;
    }
};