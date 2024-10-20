class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            unordered_map<char,int>m;
            for(int j=i;j<s.size();j++)
            {
                m[s[j]]++;
                if(m[s[j]]==k)
                {
                    count+=s.size()-j;
                    break;
                }
            }
        }
        return count;
    }
};