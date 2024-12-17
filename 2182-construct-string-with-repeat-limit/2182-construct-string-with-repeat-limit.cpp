class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        priority_queue<pair<char,int>>q;
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        for(auto i:m)
        {
            q.push({i.first,i.second});
        }
        string str="";
        while(!q.empty())
        {
            pair<char,int>p=q.top();
            q.pop();
            if(str.empty() || str.back()!=p.first)
            {
                int n=min(p.second,repeatLimit);
                for(int i=0;i<n;i++)
                {
                    str+=p.first;
                }
                if(p.second-repeatLimit>0)
                {
                    q.push({p.first,p.second-repeatLimit});
                }
            }
            else
            {
                if(q.empty())
                    break;
                pair<char,int>p1=q.top();
                q.pop();
                str+=p1.first;
                if(p1.second-1>0)
                    q.push({p1.first,p1.second-1});
                q.push(p);
            }
            
        }
        return str;
    }
};