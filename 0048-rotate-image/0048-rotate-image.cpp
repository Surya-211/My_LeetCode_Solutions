class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        reflect(matrix);
    }
    void transpose(vector<vector<int>>& matrix)
    {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=i+1;j<matrix.size();j++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
    }
    void reflect(vector<vector<int>>& matrix)
    {
        for(int i=0;i<matrix.size();i++)
        {
            int j=0;
            int k=matrix.size()-1;
            while(j<=k)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[i][k];
                matrix[i][k]=temp;
                j++;
                k--;
            }
        }
    }
};