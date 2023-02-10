class Solution {
public:
    int countGoodSubstrings(string s) {
        int count=0;
        if(s.size()<3)
            return 0;
        for(int i=0;i<=s.size()-3;i++)
        {
            string str=s.substr(i,3);
            set<char>st;
            for(int j=0;j<str.size();j++)
            {
                st.insert(str[j]);
            }
            if(st.size()==3)
                count++;
        }
        return count;
    }
};