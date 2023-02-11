class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>q;
        for(int i=0;i<gifts.size();i++)
        {
            q.push(gifts[i]);
        }
        while(k>0)
        {
            int t=q.top();
            q.pop();
            q.push(floor(sqrt(t)));
            k--;
        }
        long long sum=0;
        while(!q.empty())
        {
            sum+=q.top();
            q.pop();
        }
        return sum;
    }
};