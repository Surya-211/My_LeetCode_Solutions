class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        
        int max_area=0;
        unordered_map<int,int>m;
        for(int i=0;i<rectangles.size();i++)
        {
            int l=rectangles[i][0];
            int w=rectangles[i][1];
            int mini=min(l,w);
            max_area=max(mini,max_area);
            m[mini]++;
        }
        return m[max_area];
    }
};