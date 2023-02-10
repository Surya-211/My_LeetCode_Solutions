class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string>v;
        for(int i=0;i<words.size();i++)
        {
            string str=words[i];
            unordered_map<char,char>m1;
            unordered_map<char,char>m2;
            int flag=1;
            if(str.size()!=pattern.size())
                continue;
            for(int j=0;j<str.size();j++)
            {
                char ch=str[j];
                if(m1.find(ch)!=m1.end())
                {
                    if(m1[ch]!=pattern[j])
                    {
                        flag=0;
                        break;
                    }
                }
                else if(m2.find(pattern[j])!=m2.end())
                {
                    flag=0;
                    break;
                }
                else
                {
                    m1[ch]=pattern[j];
                    m2[pattern[j]]=ch;
                }
            }
            if(flag==1)
                v.push_back(str);
        }
        return v;
        
    }
};