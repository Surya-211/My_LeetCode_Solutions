class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int count=0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                {
                    int row=1;
                    int col=1;
                    for(int k=0;k<mat[0].size();k++)
                    {
                        if(k!=j && mat[i][k]==1)
                        {
                            row=0;
                            break;
                        }                            
                    }
                    for(int k=0;k<mat.size();k++)
                    {
                        if(k!=i && mat[k][j]==1)
                        {
                            col=0;
                            break;
                        }                            
                    }
                    if(row==1 && col==1)
                        count++;
                }
            }
        }
        return count;
    }
};