class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>m;
        for(auto i:s)
        {
            m[i]++;
        }
        priority_queue<pair<int,char>>q;
        for(auto i:m)
        {
            pair<int,char>p;
            p.first=i.second;
            p.second=i.first;
            q.push(p);
        }
        string str="";
        while(!q.empty())
        {
            pair<int,char>i=q.top();
            q.pop();
            if(str.size()==0 || i.second!=str[str.size()-1])
            {
                str+=i.second;
                if(i.first>1)
                {
                    i.first--;
                    q.push(i);
                }
            }
            else
            {
                if(q.empty())
                {
                    return "";
                }
                pair<int,char>j=q.top();
                q.pop();
                str+=j.second;
                if(j.first>1)
                {
                    j.first--;
                    q.push(j);
                }
                q.push(i);
            }
        }
        return str;
    }
};