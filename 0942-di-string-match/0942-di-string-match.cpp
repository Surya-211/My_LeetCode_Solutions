class Solution {
public:
    vector<int> diStringMatch(string s) {
        
        int max=s.size();
        int min=0;
        vector<int>v;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='I')
            {
                v.push_back(min);
                min++;
            }
            else
            {
                v.push_back(max);
                max--;
            }
        }
        v.push_back(min);
        return v;
    }
};