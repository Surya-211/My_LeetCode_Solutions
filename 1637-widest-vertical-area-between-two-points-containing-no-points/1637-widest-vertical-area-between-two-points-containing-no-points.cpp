class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        
        sort(points.begin(),points.end());
        int maxi=0;
        for(int i=1;i<points.size();i++)
        {
            int a=points[i-1][0];
            int b=points[i][0];
            maxi=max(maxi,b-a);
        }
        return maxi;
    }
};