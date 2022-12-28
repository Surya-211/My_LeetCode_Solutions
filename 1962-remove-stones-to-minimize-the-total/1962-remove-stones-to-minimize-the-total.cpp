class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>q;
        for(int i=0;i<piles.size();i++)
        {
            q.push(piles[i]);
        }
        while(k--)
        {
            int n=q.top();
            q.pop();
            n=n-(n/2);
            q.push(n);
        }
        int sum=0;
        while(!q.empty())
        {
            sum+=q.top();
            q.pop();
        }
        return sum;
    }
};