class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        
        int n=nums.size();
        vector<long long>v(n,0);
        
        unordered_map<int,vector<int>>m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]].push_back(i);
        }
        
        for(auto i:m)
        {
            vector<int>a=i.second;
            int m=a.size();
            long long sum=0;
            for(int j=0;j<a.size();j++)
            {
                sum+=a[j];
            }
            long long post_sum=sum;
            long long pre_sum=0;
            for(int j=0;j<a.size();j++)
            {
                int ind=a[j];
                post_sum-=ind;
                v[ind]+=ind*(long long)j;
                v[ind]-=pre_sum;
                v[ind]+=post_sum;
                v[ind]-=ind*(long long)(m-j-1);
                pre_sum+=a[j];
            }
        }
        
        return v;
    }
};