class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>>v(n,vector<int>(n,0));
        for(int i=0;i<trust.size();i++)
        {
            int a=trust[i][0];
            int b=trust[i][1];
            v[a-1][b-1]=1;
        }
        for(int i=0;i<n;i++)
        {
            int flag=1;
            for(int j=0;j<n;j++)
            {
                if(v[i][j]==1)
                {
                    flag=0;
                    break;
                }
            }
            int flag1=1;
            if(flag==1)
            {
                for(int j=0;j<n;j++)
                {
                    if(i!=j)
                    {
                        if(v[j][i]==0)
                        {
                            flag1=0;
                            break;
                        }
                    }
                }
            }
            if(flag==1&&flag1==1)
                return i+1;
        }
        return -1;
    }
};