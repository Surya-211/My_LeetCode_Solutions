class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int count=0;
        long long int sum=0;
        m[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            int n=nums[i];
            sum=(sum+n%k+k)%k;
            count+=m[sum];
            m[sum]++;
        }
        return count;
    }
};