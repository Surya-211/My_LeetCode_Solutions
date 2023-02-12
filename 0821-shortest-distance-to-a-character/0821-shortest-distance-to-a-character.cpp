class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>v;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ch==c)
                v.push_back(i);
        }
        vector<int>ans;
        for(int i=0;i<s.size();i++)
        {
            int diff=INT_MAX;
            for(int j=0;j<v.size();j++)
            {
                diff=min(diff,abs(v[j]-i));
            }
            ans.push_back(diff);
        }
        return ans;
    }
};