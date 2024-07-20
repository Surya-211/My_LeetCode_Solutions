class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        vector<vector<int>>v(rowSum.size(),vector<int>(colSum.size(),0));
        for(int i=0;i<rowSum.size();i++)
        {
            int sum=rowSum[i];
            for(int j=0;j<colSum.size();j++)
            {
                int mini=min(sum,colSum[j]);
                v[i][j]=mini;
                sum-=mini;
                colSum[j]-=mini;
            }
        }
        return v;
    }
};