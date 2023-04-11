class RecentCounter {
public:
    int count;
    queue<int>q;
    RecentCounter() {
        count=0;
    }
    
    int ping(int t) {
        if(q.empty())
        {
            q.push(t);
            return 1;
        }
        else
        {
            q.push(t);
            int n=t-3000;
            while(true)
            {
                int f=q.front();
                if(f<n)
                    q.pop();
                else
                    break;
            }
            return q.size();
        }
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */