class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
        for(int i=0;i<strs.size();i++)
        {
            string str=strs[i];
            string nstr=strs[i];
            sort(nstr.begin(),nstr.end());
            m[nstr].push_back(str);
        }
        vector<vector<string>>ans;
        for(auto i:m)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};