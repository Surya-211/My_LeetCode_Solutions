class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int>q;
        if(ladders>=heights.size()-1)
            return heights.size()-1;
        int i;
        for(i=1;i<heights.size();i++)
        {
            int diff=heights[i]-heights[i-1];
            if(diff<=0)
                continue;
            if(bricks>0 && diff<=bricks)
            {
                q.push(diff);
                bricks-=diff;
            }
            else if(bricks<diff && ladders>0)
            {
                ladders--;
                q.push(diff);
                int h=q.top();
                q.pop();
                bricks+=h;
                bricks-=diff;
            }
            else
                break;
        }
        return i-1;
    }
};