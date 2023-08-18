class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<vector<int>>v(n,vector<int>(n,0));
        for(int i=0;i<roads.size();i++)
        {
            int a=roads[i][0];
            int b=roads[i][1];
            v[a][b]=1;
            v[b][a]=1;
        }
        vector<int>deg(n,0);
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(v[i][j]==1)
                    count++;
            }
            deg[i]=count;
        }
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i][j]==1)
                {
                    maxi=max(maxi,deg[i]+deg[j]-1);
                }
                else if(i!=j)
                {
                    maxi=max(maxi,deg[i]+deg[j]);
                }
            }
        }
        return maxi;
    }
};