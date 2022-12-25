class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>v;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            int j=(i+1)%n;
            while(j!=i)
            {
                if(nums[j]>nums[i])
                    break;
                j=(j+1)%n;
            }
            if(j==i)
                v.push_back(-1);
            else
                v.push_back(nums[j]);
        }
        return v;
    }
};