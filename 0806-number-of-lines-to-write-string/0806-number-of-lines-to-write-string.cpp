class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        
        int total=0;
        int count=1;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            total+=widths[ch-'a'];
            if(total>100)
            {
                total=widths[ch-'a'];
                count++;
            }
        }
        vector<int>v;
        v.push_back(count);
        v.push_back(total);
        return v;
    }
};