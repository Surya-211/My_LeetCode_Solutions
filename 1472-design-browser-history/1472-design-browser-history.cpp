class BrowserHistory {
public:
    
    vector<string>v{1000};
    int i=0;
    int cur=0;
    BrowserHistory(string homepage) {
        v[0]=homepage;
    }
    
    void visit(string url) {
        i=cur;
        i++;
        v[i]=url;
        cur=i;
    }
    
    string back(int steps) {
        if(cur-steps>=0)
        {
            cur=cur-steps;
            return v[cur];
        }
        else
        {
            cur=0;
            return v[cur];   
        }
    }
    
    string forward(int steps) {
        if(cur+steps>i)
        {
            cur=i;
            return v[cur];
        }
        else
        {
            cur=steps+cur;
            return v[cur];
        }
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */