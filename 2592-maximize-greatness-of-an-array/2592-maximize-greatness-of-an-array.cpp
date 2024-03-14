class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ind1=0;
        int ind2=0;
        int count=0;
        while(ind1<nums.size() && ind2<nums.size())
        {
            if(nums[ind1]<=nums[ind2])
            {
                ind1++;
                continue;
            }
            ind1++;
            ind2++;
            count++;
        }
        return count;
    }
};