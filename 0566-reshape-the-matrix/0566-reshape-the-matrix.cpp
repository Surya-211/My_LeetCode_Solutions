class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row=mat.size();
        int col=mat[0].size();
        if(row*col!=r*c)
            return mat;
        vector<vector<int>>ans;
        vector<int>v;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                v.push_back(mat[i][j]);
            }
        }
        int k=0;
        for(int i=0;i<r;i++)
        {
            vector<int>a;
            for(int j=0;j<c;j++)
            {
                a.push_back(v[k++]);
            }
            ans.push_back(a);
        }
        return ans;
    }
};