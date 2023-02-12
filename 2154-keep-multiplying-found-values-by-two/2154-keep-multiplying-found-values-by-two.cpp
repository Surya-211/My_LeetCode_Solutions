class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
        
        set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        int n=original;
        while(s.find(n)!=s.end())
        {
            n*=2;
        }
        return n;
        
    }
};