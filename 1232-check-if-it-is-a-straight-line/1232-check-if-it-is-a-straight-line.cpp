class Solution {
public:
    class point
    {
        public:
        int x;
        int y;
    };
    static bool comparator(point a,point b)
    {
        if(a.x<b.x)
            return true;
        else if(a.x==b.x)
        {
            if(a.y<b.y)
                return true;
            else
                return false;
        }
        else
            return false;
    }
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        vector<point>v;
        for(int i=0;i<coordinates.size();i++)
        {
            point p;
            p.x=coordinates[i][0];
            p.y=coordinates[i][1];
            v.push_back(p);
        }
        sort(v.begin(),v.end(),comparator);
        int x1=v[0].x;
        int y1=v[0].y;
        int x2=v[1].x;
        int y2=v[1].y;
        float slope=((float)(x2-x1))/(y2-y1);
        int flag=1;
        for(int i=2;i<v.size();i++)
        {
            point p;
            p=v[i];
            int xx=p.x;
            int yy=p.y;
            if(((float)(xx-x1))/(yy-y1)!=slope)
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
            return false;
        return true;
    }
};