class Solution {
public:
    int minIncrements(int n, vector<int>& cost) {
        int count=0;
        for(int i=n/2-1;i>=0;i--)
        {
            int l=2*i+1;
            int r=2*i+2;
            int diff=abs(cost[l]-cost[r]);
            count+=diff;
            cost[i]+=max(cost[l],cost[r]);
        }
        return count;
    }
};