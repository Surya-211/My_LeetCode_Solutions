class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
            int n=nums[i];
            int rev=0;
            while(n>0)
            {
                rev=rev*10+n%10;
                n/=10;
            }
            s.insert(rev);
        }
        return s.size();
    }
};