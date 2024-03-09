class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,priority_queue<int>>m;
        for(int i=0;i<nums.size();i++)
        {
            int n=nums[i];
            int cn=n;
            int sum=0;
            while(n>0)
            {
                sum+=n%10;
                n/=10;
            }
            m[sum].push(cn);
        }
        int maxi=-1;
        for(auto i:m)
        {
            int sum=0;
            priority_queue<int>q=i.second;
            if(q.size()>1)
            {
                sum+=q.top();
                q.pop();
                sum+=q.top();
            }
            if(sum>0)
                maxi=max(maxi,sum);
        }
        return maxi;
    }
};