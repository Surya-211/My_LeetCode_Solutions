class Solution {
public:
    int minTimeToReach(vector<vector<int>>& moveTime) {
        int n=moveTime.size();
        int m=moveTime[0].size();
        //{t,{r,c}}
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>q;
        vector<vector<int>>dp(n,vector<int>(m,INT_MAX));
        q.push({0,{0,0}});
        vector<int>dr={-1,0,1,0};
        vector<int>dc={0,-1,0,1};
        while(!q.empty())
        {
            pair<int,pair<int,int>>p=q.top();
            q.pop();
            int t=p.first;
            int r=p.second.first;
            int c=p.second.second;
            if(r==n-1 && c==m-1)
                return t;
            if(t>=dp[r][c])
                continue;
            dp[r][c]=t;
            for(int i=0;i<4;i++)
            {
                int nr=dr[i]+r;
                int nc=dc[i]+c;
                if(nr>=0 && nr<n && nc>=0 && nc<m)
                    q.push({max(t,moveTime[nr][nc])+1,{nr,nc}});
            }
        }
        return -1;
    }
};