class Solution {
public:
    int func(unordered_map<int,int>m,int x)
    {
        priority_queue<pair<int,int>>q;
        for(auto i:m)
        {
            q.push({i.second,i.first});
        }
        int sum=0;
        for(int i=0;i<x;i++)
        {
            if(!q.empty())
            {
                pair<int,int>p=q.top();
                q.pop();
                sum+=p.first*p.second;
            }
            else
                break;
        }
        return sum;
    }
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int>v;
        unordered_map<int,int>m;
        for(int i=0;i<k;i++)
        {
            m[nums[i]]++;
        }
        v.push_back(func(m,x));
        int j=0;
        for(int i=k;i<nums.size();i++)
        {
            m[nums[j]]--;
            if(m[nums[j]]==0)
            {
                m.erase(nums[j]);
            }
            j++;
            m[nums[i]]++;
            v.push_back(func(m,x));
        }
        return v;
    }
};