class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        priority_queue<pair<int,char>>q;
        for(auto i:m)
        {
            pair<int,char>p;
            p.first=i.second;
            p.second=i.first;
            q.push(p);
        }
        string str;
        while(!q.empty())
        {
            pair<int,char>p;
            p=q.top();
            int freq=p.first;
            int j=1;
            while(j<=freq)
            {
                str.push_back(p.second);
                j++;
            }
            q.pop();
        }
        return str;
        
    }
};