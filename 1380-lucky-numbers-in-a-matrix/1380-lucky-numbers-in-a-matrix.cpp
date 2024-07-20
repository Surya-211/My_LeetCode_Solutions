class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>v;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int el=matrix[i][j];
                int flag=1;
                for(int k=0;k<n;k++)
                {
                    if(matrix[i][k]<el)
                    {
                        flag=0;
                        break;
                    }
                }
                for(int k=0;k<m;k++)
                {
                    if(matrix[k][j]>el)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                    v.push_back(el);
            }
        }
        return v;
    }
};