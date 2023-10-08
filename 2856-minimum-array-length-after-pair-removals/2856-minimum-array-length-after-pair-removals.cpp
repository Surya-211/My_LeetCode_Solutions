class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int maxi=0;
        int freq=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                freq++;
                continue;
            }
            maxi=max(maxi,freq);
            freq=1;
        }
        maxi=max(maxi,freq);
        int n=nums.size();
        if(maxi<=n/2)
        {
            if(n%2==0)
                return 0;
            else 
                return 1;
        }
        else
        {
            int rem=n-maxi;
            return n-2*rem;
        }
    }
};