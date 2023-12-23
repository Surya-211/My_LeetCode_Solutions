class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>>s;
        pair<int,int>p={0,0};
        s.insert(p);
        int x=0;
        int y=0;
        for(int i=0;i<path.size();i++)
        {
            char ch=path[i];
            if(ch=='N')
                y++;
            else if(ch=='S')
                y--;
            else if(ch=='E')
                x++;
            else
                x--;
            if(s.find({x,y})!=s.end())
                return true;
            else
                s.insert({x,y});
        }
        return false;
    }
};