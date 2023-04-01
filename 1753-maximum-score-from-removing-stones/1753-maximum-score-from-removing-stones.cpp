class Solution {
public:
    int maximumScore(int a, int b, int c) {
       
        int moves=0;
        priority_queue<int>q;
        q.push(a);
        q.push(b);
        q.push(c);
        while(true)
        {
            int n=q.top();
            q.pop();
            int m=q.top();
            q.pop();
            moves++;
            n--;
            m--;
            if(n!=0)
                q.push(n);
            if(m!=0)
                q.push(m);
            if(q.size()<=1)
                break;
        }
        return moves;
    }
};