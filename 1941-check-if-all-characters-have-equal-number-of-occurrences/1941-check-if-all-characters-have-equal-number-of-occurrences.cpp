class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        int freq=m[s[0]];
        for(auto i:m)
        {
            if(i.second!=freq)
                return false;
        }
        return true;
    }
};