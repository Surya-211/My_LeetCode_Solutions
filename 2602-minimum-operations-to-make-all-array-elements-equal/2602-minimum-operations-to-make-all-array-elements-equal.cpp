class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        
        vector<long long>v;
        long long sum=0;
        sort(nums.begin(),nums.end());
        unordered_map<int,long long>m;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            m[i]=sum;
        }
        int n=nums.size();
        for(int i=0;i<queries.size();i++)
        {
            int low=0;
            int high=n-1;
            while(low<high)
            {
                int mid=(low+high)/2;
                if(queries[i]>nums[mid])
                    low=mid+1;
                else
                    high=mid;
            }
            if(nums[low]>queries[i])
                low--;
            long long s=m[low];
            long long sum=(long long)(low+1)*queries[i]-s;
            long long s1=m[n-1];
            long long s2=s1-s;
            int m=n-(low+1);
            sum+=s2-(long long)m*queries[i];
            v.push_back(sum);
        }
        return v;
    }
};