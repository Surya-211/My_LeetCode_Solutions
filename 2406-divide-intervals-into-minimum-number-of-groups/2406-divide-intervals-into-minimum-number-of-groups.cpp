class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        int count=0;
        priority_queue<int,vector<int>,greater<int>>q;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size();i++)
        {
            int a=intervals[i][0];
            int b=intervals[i][1];
            if(q.empty() || a<=q.top())
                q.push(b);
            else
            {
                q.pop();
                q.push(b);
            }
        }
        return q.size();
    }
};