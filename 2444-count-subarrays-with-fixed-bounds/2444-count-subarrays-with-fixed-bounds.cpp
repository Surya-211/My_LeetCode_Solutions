class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int start=0;
        long long ans=0;
        int minstart=0,maxstart=0;
        bool minfound=false,maxfound=false;
        for(int i=0;i<nums.size();i++)
        {
            int n=nums[i];
            if(n<minK || n>maxK)
            {
                minfound=false;
                maxfound=false;
                start=i+1;
            }
            if(n==minK)
            {
                minfound=true;
                minstart=i;
            }
            if(n==maxK)
            {
                maxfound=true;
                maxstart=i;
            }
            if(minfound && maxfound)
            {
                ans+=(min(minstart,maxstart)-start+1);
            }
        }
        return ans;
    }
};