class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>>v;
        int n=grid.size();
        for(int i=0;i<n-2;i++)
        {
            vector<int>a;
            for(int j=0;j<n-2;j++)
            {
                int maxi=INT_MIN;
                for(int k=i;k<=i+2;k++)
                {
                    for(int l=j;l<=j+2;l++)
                    {
                        maxi=max(maxi,grid[k][l]);
                    }
                }
                a.push_back(maxi);
            }
            v.push_back(a);
        }
        return v;
    }
};