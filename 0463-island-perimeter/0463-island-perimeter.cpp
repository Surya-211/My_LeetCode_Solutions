class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int count=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    if(i-1>=0)
                    {
                        if(grid[i-1][j]==0)
                            count++;
                    }
                    else
                        count++;
                    if(i+1<n)
                    {
                        if(grid[i+1][j]==0)
                            count++;
                    }
                    else
                        count++;
                    if(j-1>=0)
                    {
                        if(grid[i][j-1]==0)
                            count++;
                    }
                    else
                        count++;
                    if(j+1<m)
                    {
                        if(grid[i][j+1]==0)
                            count++;
                    }
                    else
                        count++;
                }
            }
        }
        return count;
    }
};