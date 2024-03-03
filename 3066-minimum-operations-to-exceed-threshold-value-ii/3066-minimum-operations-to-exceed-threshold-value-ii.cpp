class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long int,vector<long long int>,greater<long long int>>q;
        for(int i=0;i<nums.size();i++)
        {
            q.push(nums[i]);
        }
        int count=0;
        while(q.size()>=2)
        {
            if(q.top()>=k)
            {
                break;
            }
            int x=q.top();
            q.pop();
            int y=q.top();
            q.pop();
            long long int n=(long long int)min(x,y)*2+max(x,y);
            q.push(n);
            count++;
        }
        return count;
    }
};