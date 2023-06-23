class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans(n,-1);
        long long sum=0;
        if(2*k>=n)
            return ans;
        for(int i=0;i<=2*k;i++)
        {
            sum+=nums[i];
        }
        int ind=0;
        int count=2*k+1;
        int ind2=2*k+1;
        for(int i=k;i<n-k;i++)
        {
            ans[i]=sum/count;
            sum-=nums[ind++];
            if(ind2<n)
            sum+=nums[ind2++];
        }
        return ans;
    }
};