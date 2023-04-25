class SmallestInfiniteSet {
public:
    
    set<int>s;
    SmallestInfiniteSet() {
        for(int i=1;i<1100;i++)
        {
            s.insert(i);
        }
    }
    
    int popSmallest() {
        int n;
        for(auto i:s)
        {
            n=i;
            break;
        }
        s.erase(n);
        return n;
    }
    
    void addBack(int num) {
        s.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */