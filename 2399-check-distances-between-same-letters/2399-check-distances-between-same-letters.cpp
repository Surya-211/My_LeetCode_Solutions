class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(m.find(ch)==m.end())
            {
                m[ch]=i;
            }
            else
            {
                int j=m[ch];
                int dist=i-j-1;
                int d=ch-97;
                if(dist!=distance[d])
                    return false;
            }
        }
        return true;
    }
};