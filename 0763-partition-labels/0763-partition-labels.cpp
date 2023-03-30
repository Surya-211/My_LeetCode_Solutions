class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]=i;
        }
        int prev=0;
        int maxi=0;
        vector<int>v;
        for(int i=0;i<s.size();i++)
        {
            maxi=max(maxi,m[s[i]]);
            if(maxi==i)
            {
                v.push_back(maxi-prev+1);
                prev=maxi+1;
            }
        }
        return v;
    }
};