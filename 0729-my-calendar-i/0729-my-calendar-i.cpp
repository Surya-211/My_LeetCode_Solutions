class MyCalendar {
public:
    
     vector<pair<int,int>>v;
    
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        
         for(auto it: v)
        {
            if(it.first<end && start<it.second)
                return false;
        }
        v.push_back({start,end});
        return true;
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */