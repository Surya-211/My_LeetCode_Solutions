class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        
        vector<int>v;
        
        for(int i=0;i<queries.size();i++)
        {
            int x=queries[i][0];
            int y=queries[i][1];
            int r=queries[i][2];
            int count=0;
            for(int i=0;i<points.size();i++)
            {
                int px=points[i][0];
                int py=points[i][1];
                float dist=sqrt((px-x)*(px-x)+(py-y)*(py-y));
                if(dist<=r)
                    count++;
            }
            v.push_back(count);
        }
        return v;
    }
};