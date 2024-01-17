class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++)
            m[arr[i]]++;
        set<int>s;
        for(auto i:m)
            s.insert(i.second);
        if(m.size()==s.size())
            return true;
        else
            return false;
    }
};