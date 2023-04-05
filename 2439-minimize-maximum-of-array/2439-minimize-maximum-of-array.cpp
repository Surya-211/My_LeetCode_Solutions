class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        
        long long prefix=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            prefix+=nums[i];
            int a=ceil(prefix/((i+1)*1.0));
            maxi=max(maxi,a);
        }
        return maxi;
    }
};