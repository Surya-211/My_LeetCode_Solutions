class Solution {
public:
    int countPoints(string rings) {
        
        unordered_map<char,set<char>>m;
        for(int i=1;i<rings.size();i+=2)
        {
            char ch=rings[i-1];
            char n=rings[i];
            m[n].insert(ch);
        }
        int count=0;
        for(auto i:m)
        {
            if(i.second.size()==3)
                count++;
        }
        return count;
    }
};