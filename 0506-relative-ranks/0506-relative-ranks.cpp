class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        vector<int>v=score;
        sort(v.begin(),v.end(),greater<int>());
        vector<string>s;
        unordered_map<int,int>m;
        for(int i=0;i<v.size();i++)
        {
            m[v[i]]=i+1;
        }
        for(int i=0;i<score.size();i++)
        {
            int n=m[score[i]];
            if(n==1)
                s.push_back("Gold Medal");
            else if(n==2)
                s.push_back("Silver Medal");
            else if(n==3)
                s.push_back("Bronze Medal");
            else
            {
                string ns=to_string(n);
                s.push_back(ns);
            }
        }
        return s;
    }
};