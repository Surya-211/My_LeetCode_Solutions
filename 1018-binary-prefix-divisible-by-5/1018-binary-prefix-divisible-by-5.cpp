class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        
        vector<bool>v;
        long long n=0;
        for(int i=0;i<nums.size();i++)
        {
            n=n*2+nums[i];
            if(n%5==0)
                v.push_back(true);
            else
                v.push_back(false);
            n=n%5;
        }
        return v;
    }
};