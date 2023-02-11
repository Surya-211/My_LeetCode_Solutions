class Solution {
public:
    int partitionString(string s) {
        int count=0;
        int i=0;
        while(i<s.size())
        {
            unordered_map<char,int>m;
            while(i<s.size()&&m.find(s[i])==m.end())
            {
                m[s[i]]++;
                i++;
            }
            count++;
        }
        return count;
    }
};