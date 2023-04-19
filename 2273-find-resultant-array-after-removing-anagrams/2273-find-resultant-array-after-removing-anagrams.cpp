class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        
        unordered_map<string,int>m;
        vector<string>v;
        for(int i=0;i<words.size();i++)
        {
            string str=words[i];
            string nstr=str;
            sort(nstr.begin(),nstr.end());
            if(m.find(nstr)==m.end())
            {
                v.push_back(str);
                m[nstr]=i;
            }
            else
            {
                if(m[nstr]<i-1)
                    v.push_back(str);
                m[nstr]=i;   
            }
        }
        return v;
    }
};