class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int>m;
        for(int i=0;i<grid.size();i++)
        {
            m[grid[i]]++;
        }
        int count=0;
        for(int i=0;i<grid.size();i++)
        {
            vector<int>v;
            for(int j=0;j<grid[0].size();j++)
            {
                v.push_back(grid[j][i]);
            }
            count+=m[v];
        }
        return count;
    }
};