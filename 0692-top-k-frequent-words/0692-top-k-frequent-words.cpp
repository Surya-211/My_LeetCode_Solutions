class Solution {
public:
    
    class pair
    {
        public:
        int first;
        string second;
    };
    
    static bool comparator(pair p1,pair p2)
    {
        if(p1.first!=p2.first)
            return p1.first>p2.first;
        else
            return p2.second>p1.second;
    }
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>m;
        for(int i=0;i<words.size();i++)
        {
            m[words[i]]++;
        }
        vector<pair>v;
        for(auto i:m)
        {
            pair p;
            p.first=i.second;
            p.second=i.first;
            v.push_back(p);
        }
        sort(v.begin(),v.end(),comparator);
        vector<string>ans;
        int i=0;
        while(i<k)
        {
            pair p=v[i];
            ans.push_back(p.second);
            i++;
        }
        return ans;
    }
};