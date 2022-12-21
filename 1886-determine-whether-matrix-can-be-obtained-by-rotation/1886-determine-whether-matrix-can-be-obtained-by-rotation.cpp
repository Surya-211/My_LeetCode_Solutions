class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat==target)
            return true;
        int deg=3;
        while(deg--)
        {
            for(int i=0;i<mat.size();i++)
            {
                for(int j=i+1;j<mat.size();j++)
                {
                    int temp=mat[i][j];
                    mat[i][j]=mat[j][i];
                    mat[j][i]=temp;
                }
            }
            for(int i=0;i<mat.size();i++)
            {
                 reverse(mat[i].begin(),mat[i].end());
            }
                
            if(mat==target)
                return true;
        }
        return false;
    }
};