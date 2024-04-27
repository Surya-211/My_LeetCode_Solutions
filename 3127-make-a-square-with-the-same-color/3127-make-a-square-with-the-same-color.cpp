class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        for(int i=0;i<grid.size()-1;i++)
        {
            for(int j=0;j<grid[0].size()-1;j++)
            {
                int white=0;
                int black=0;
                if(grid[i][j]=='B')
                    black++;
                else
                    white++;
                if(grid[i][j+1]=='B')
                    black++;
                else
                    white++;
                if(grid[i+1][j]=='B')
                    black++;
                else
                    white++;
                if(grid[i+1][j+1]=='B')
                    black++;
                else
                    white++;
                if(black==1 || white==1 || black==0 || white==0)
                    return true;
            }
        }
        return false;
    }
};