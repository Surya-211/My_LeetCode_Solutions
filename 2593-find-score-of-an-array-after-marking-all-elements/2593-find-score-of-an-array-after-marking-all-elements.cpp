class Solution {
public:
    long long findScore(vector<int>& nums) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        for(int i=0;i<nums.size();i++)
        {
            q.push({nums[i],i});
        }
        long long score=0;
        vector<int>v(nums.size(),0);
        while(!q.empty())
        {
            pair<int,int>p=q.top();
            q.pop();
            int i=p.second;
            if(v[i]==0)
            {
                score+=p.first;
                v[i]=1;
                if(i>0)
                    v[i-1]=1;
                if(i<nums.size()-1)
                    v[i+1]=1;
            }
        }
        return score;
    }
};