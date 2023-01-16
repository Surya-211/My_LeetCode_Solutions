class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>q;
        for(int i=0;i<stones.size();i++)
        {
            q.push(stones[i]);
        }
        while(q.size()>1)
        {
            int n1=q.top();
            q.pop();
            int n2=q.top();
            q.pop();
            if(n1==n2)
                continue;
            else
                q.push(n1-n2);
        }
        if(q.size()==0)
            return 0;
        else
            return q.top();
    }
};