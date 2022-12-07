class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        priority_queue<pair<int,int>>q;
        for(auto i:m)
        {
            pair<int,int>p;
            p.first=i.second;
            p.second=i.first;
            q.push(p);
        }
        vector<int>v;
        while(k!=0)
        {
            int n=q.top().second;
            q.pop();
            v.push_back(n);
            k--;
        }
        return v;
    }
};