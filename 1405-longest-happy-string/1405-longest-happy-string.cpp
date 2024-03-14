class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string s="";
        priority_queue<pair<int,char>>q;
        if(a)
            q.push({a,'a'});
        if(b)
            q.push({b,'b'});
        if(c)
            q.push({c,'c'});
        while(q.size()>1)
        {
            pair<int,char>one=q.top();
            q.pop();
            pair<int,char>two=q.top();
            q.pop();
            if(one.first>=2)
            {
                s=s+one.second+one.second;
                one.first-=2;
            }
            else
            {
                s=s+one.second;
                one.first-=1;
            }
            if(two.first>=2 && two.first>=one.first)
            {
                s=s+two.second+two.second;
                two.first-=2;
            }
            else
            {
                s=s+two.second;
                two.first-=1;
            }
            if(one.first>0)
                q.push(one);
            if(two.first>0)
                q.push(two);
        }
        if(q.empty())
            return s;
        else
        {
            if(q.top().first>=2)
                s=s+q.top().second+q.top().second;
            else
                s=s+q.top().second;
        }
        return s;
    }
};