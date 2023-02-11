class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        
        vector<vector<int>>v;
        for(int i=0;i<m;i++)
        {
            vector<int>a;
            for(int j=0;j<n;j++)
            {
             a.push_back(0);
            }
            v.push_back(a);
        }
        for(int i=0;i<indices.size();i++)
        {
            int row=indices[i][0];
            int col=indices[i][1];
            for(int j=0;j<n;j++)
            {
                v[row][j]++;
            }
            for(int j=0;j<m;j++)
            {
                v[j][col]++;
            }
        }
        int count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i][j]%2!=0)
                    count++;
            }
        }
        return count;
    }
};