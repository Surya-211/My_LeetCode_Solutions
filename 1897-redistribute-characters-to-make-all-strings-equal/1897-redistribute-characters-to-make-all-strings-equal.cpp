class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int>m;
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words[i].size();j++)
            {
                char ch=words[i][j];
                m[ch]++;
            } 
        }
        int s=words.size();
        for(auto i:m)
        {
            if(i.second%s!=0)
                return false;
        }
        return true;
    }
};