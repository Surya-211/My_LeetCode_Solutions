class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int>m;
        int cursum=0;
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            cursum+=nums[i];
            if(cursum==k)
                count++;
            if(m.find(cursum-k)!=m.end())
                count+=m[cursum-k];
            m[cursum]++;
        }
        return count;
    }
};