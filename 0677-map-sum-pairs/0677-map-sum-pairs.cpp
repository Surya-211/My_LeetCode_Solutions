class MapSum {
public:
    unordered_map<string,int>m;
    MapSum() {
        
    }
    
    void insert(string key, int val) {
        m[key]=val;
    }
    
    int sum(string prefix) {
        int sum=0;
        for(auto i:m)
        {
            string str=i.first;
            if(str.starts_with(prefix))
                sum+=i.second;
        }
        return sum;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */