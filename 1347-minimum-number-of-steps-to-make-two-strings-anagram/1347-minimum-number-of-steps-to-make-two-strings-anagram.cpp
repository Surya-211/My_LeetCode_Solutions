class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>sm;
        unordered_map<char,int>tm;
        for(int i=0;i<s.size();i++)
        {
            sm[s[i]]++;
            tm[t[i]]++;
        }
        int steps=0;
        for(auto i:sm)
        {
            if(tm[i.first]<i.second)
                steps=steps+(i.second-tm[i.first]);
        }
        return steps;
    }
};