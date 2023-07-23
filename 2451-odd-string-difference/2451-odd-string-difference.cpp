class Solution {
public:
    string oddString(vector<string>& words) {
        map<vector<int>,int>m1;
        map<vector<int>,string>m2;
        for(int i=0;i<words.size();i++)
        {
            vector<int>v;
            string str=words[i];
            for(int j=1;j<str.size();j++)
            {
                v.push_back(str[j]-str[j-1]);
            }
            m1[v]++;
            m2[v]=str;
        }
        for(auto i:m1)
        {
            if(i.second==1)
                return m2[i.first];
        }
        return "";
    }
};