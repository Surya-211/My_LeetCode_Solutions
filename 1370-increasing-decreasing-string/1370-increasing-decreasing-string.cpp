class Solution {
public:
    string sortString(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        string nstr;
        int n=s.size();
        int i=1;
        while(i<=n)
        {
            for(char ch='a';ch<='z';ch++)
            {
                if(m[ch]>0)
                {
                    nstr.push_back(ch);
                    m[ch]--;
                    i++;
                }
            }
            for(char ch='z';ch>='a';ch--)
            {
                if(m[ch]>0)
                {
                    nstr.push_back(ch);
                    m[ch]--;
                    i++;
                }
            }
        }
        return nstr;
    }
};