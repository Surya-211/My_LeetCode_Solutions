class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
        long long count=0;
        unordered_map<int,int>row;
        unordered_map<int,int>col;
        for(int i=0;i<grid.size();i++)
        {
            int one=0;
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                    one++;
            }
            row[i]=one;
        }
        for(int j=0;j<grid[0].size();j++)
        {
            int one=0;
            for(int i=0;i<grid.size();i++)
            {
                if(grid[i][j]==1)
                    one++;
            }
            col[j]=one;
        }
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    int one_row=row[i];
                    int one_col=col[j];
                    if(one_row>1 && one_col>1)
                        count+=(one_row-1)*(one_col-1);
                }
            }
        }
        return count;
    }
};