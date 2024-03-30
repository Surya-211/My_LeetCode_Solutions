class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums,k)-atMost(nums,k-1);
    }
    int atMost(vector<int>nums,int k)
    {
        unordered_map<int,int>m;
        int j=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            while(m.size()>k)
            {
                m[nums[j]]--;
                if(m[nums[j]]==0)
                    m.erase(nums[j]);
                j++;
            }
            count+=i-j+1;
        }
        return count;
    }
};