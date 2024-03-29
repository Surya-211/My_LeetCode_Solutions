class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            maxi=max(maxi,nums[i]);
        }
        int count=0;
        long long ans=0;
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==maxi)
                count++;
            while(count>=k)
            {
                if(nums[j]==maxi)
                {
                    count--;
                }
                j++;
                ans+=nums.size()-i;
            }
        }
        return ans;
    }
};