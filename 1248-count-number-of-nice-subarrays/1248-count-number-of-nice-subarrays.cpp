class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int count=0;
        int sum=0;
        m[sum]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i]%2;
            int rem=sum-k;
            if(m.find(rem)!=m.end())
                count+=m[rem];
            m[sum]++;
        }
        return count;
    }
};