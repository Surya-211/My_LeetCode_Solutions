class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,int>m1;
        for(int i=0;i<words[0].size();i++)
        {
            m1[words[0][i]]++;
        }
        for(int i=1;i<words.size();i++)
        {
            unordered_map<char,int>m2;
            for(int j=0;j<words[i].size();j++)
            {
                m2[words[i][j]]++;
            }
            for(auto k:m1)
            {
                if(k.second>0)
                {
                    if(m2.find(k.first)!=m2.end())
                    {
                        m1[k.first]=min(k.second,m2[k.first]);
                    }
                    else
                        m1[k.first]=0;
                }
            }
        }
        vector<string>v;
        for(auto i:m1)
        {
            if(i.second>0)
            {
                int j=1;
                while(j<=i.second)
                {
                    string s="";
                    s+=i.first;
                    v.push_back(s);
                    j++;
                }
            }
        }
        return v;
    }
};