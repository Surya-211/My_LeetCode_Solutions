class Solution {
public:
    vector<long long> unmarkedSumArray(vector<int>& nums, vector<vector<int>>& queries) {
        long long sum=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            q.push({nums[i],i});
        }
        vector<int>mark(nums.size(),0);
        vector<long long>v;
        for(int i=0;i<queries.size();i++)
        {
            int a=nums[queries[i][0]];
            if(mark[queries[i][0]]==0)
            {
                sum-=a;
                mark[queries[i][0]]=1;
            }
            int b=queries[i][1];
            while(b>0 && !q.empty())
            {
                pair<int,int>c=q.top();
                if(mark[c.second]==1)
                {
                    q.pop();
                    continue;
                }
                mark[c.second]=1;
                sum-=c.first;
                q.pop();
                b--;
            }
            v.push_back(sum);
        }
        return v;
    }
};