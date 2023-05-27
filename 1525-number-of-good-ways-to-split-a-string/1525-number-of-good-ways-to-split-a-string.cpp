class Solution {
public:
    int numSplits(string s) {
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(int i=0;i<s.size();i++)
        {
            m2[s[i]]++;
        }
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            m1[s[i]]++;
            m2[s[i]]--;
            if(m2[s[i]]==0)
                m2.erase(s[i]);
            if(m1.size()==m2.size())
                count++;
        }
        return count;
    }
};