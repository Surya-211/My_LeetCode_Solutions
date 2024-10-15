class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>v=nums;
        sort(v.begin(),v.end());
        int i=0;
        for(int k=0;k<nums.size();k++)
        {
            if(v[i]==nums[k])
                i++;
            else
                break;
        }
        int j=nums.size()-1;
        for(int k=nums.size()-1;k>=0;k--)
        {
            if(v[j]==nums[k])
                j--;
            else
                break;
        }
        if(i>j)
            return 0;
        return j-i+1;
    }
};