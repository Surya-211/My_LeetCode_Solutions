class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        for(int i=0;i<nums.size();i++)
        {
            pair p={nums[i],i};
            q.push(p);
        }
        while(k--)
        {
            pair p=q.top();
            q.pop();
            p.first=p.first*multiplier;
            q.push(p);
        }
        vector<int>v(nums.size());
        while(!q.empty())
        {
            pair p=q.top();
            q.pop();
            v[p.second]=p.first;
        }
        return v;
    }
};