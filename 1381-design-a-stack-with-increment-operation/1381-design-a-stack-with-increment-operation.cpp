class CustomStack {
public:
    stack<int>st1;
    stack<int>st2;
    int maxi=0;
    CustomStack(int maxSize) {
        maxi=maxSize;
    }
    
    void push(int x) {
        if(st1.size()<maxi)
        {
            st1.push(x);
        }
    }
    
    int pop() {
        if(!st1.empty())
        {
            int t=st1.top();
            st1.pop();
            return t;
        }
        else
            return -1;
    }
    
    void increment(int k, int val) {
        int n=st1.size();
        int s=min(n,k);
        int i=n-s;
        while(i>0)
        {
            st2.push(st1.top());
            st1.pop();
            i--;
        }
        while(!st1.empty())
        {
            st2.push(st1.top()+val);
            st1.pop();
        }
        while(!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */