class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
          vector<int>v;
        int i=0;
        int j=n;
        for(int k=0;k<nums.size();k++)
        {
            if(k%2==0)
                v.push_back(nums[i++]);
            else
                v.push_back(nums[j++]);
        }
        return v;
    }
};