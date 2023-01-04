class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())
            return false;
        unordered_map<char,char>m1;
        unordered_map<char,char>m2;
        for(int i=0;i<s.size();i++)
        {
            
            if(m1[s[i]]==0&&m2[t[i]]==0)
            {
                m1[s[i]]=t[i];
                m2[t[i]]=s[i];
            }
            if(m1[s[i]]!=t[i]||m2[t[i]]!=s[i])
                return false;
        }
        return true;
    }
};