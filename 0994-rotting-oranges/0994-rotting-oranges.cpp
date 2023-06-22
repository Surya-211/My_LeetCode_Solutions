class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>v=grid;
        queue<pair<pair<int,int>,int>>q;
        vector<int>row={-1,0,1,0};
        vector<int>col={0,1,0,-1};
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i][j]==2)
                    q.push({{i,j},0});
            }
        }
        int time=0;
        while(!q.empty())
        {
            int a=q.front().first.first;
            int b=q.front().first.second;
            int t=q.front().second;
            q.pop();
            time=max(time,t);
            for(int i=0;i<row.size();i++)
            {
                int nrow=a+row[i];
                int ncol=b+col[i];
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && v[nrow][ncol]==1)
                {
                    v[nrow][ncol]=2;
                    q.push({{nrow,ncol},t+1});
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i][j]==1)
                    return -1;
            }
        }
        return time;
    }
};