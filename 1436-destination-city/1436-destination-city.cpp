class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int>m;
        for(int i=0;i<paths.size();i++)
        {
            m[paths[i][1]]++;
            m[paths[i][0]]--;
        }
        for(auto i:m)
        {
            if(i.second==1)
                return i.first;
        }
        return "";
    }
};