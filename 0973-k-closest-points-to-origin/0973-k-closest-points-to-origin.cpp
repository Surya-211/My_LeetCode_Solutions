class Solution {
public:
    
    class point
    {
        public:
        double dist;
        int first;
        int second;
    };
    
    static bool comparator(point p1,point p2)
    {
        if(p1.dist<p2.dist)
            return true;
        else
            return false;
    }
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
       vector<point>q;
        for(int i=0;i<points.size();i++)
        {
            int x=points[i][0];
            int y=points[i][1];
            double d=sqrt((x*x)+(y*y));
            point p;
            p.dist=d;
            p.first=points[i][0];
            p.second=points[i][1];
            q.push_back(p);
        }
        sort(q.begin(),q.end(),comparator);
        vector<vector<int>>v;
        int i=0;
        while(k--)
        {
            vector<int>a;
            a.push_back(q[i].first);
            a.push_back(q[i].second);
            v.push_back(a);
            i++;
        }
        return v;
    }
};