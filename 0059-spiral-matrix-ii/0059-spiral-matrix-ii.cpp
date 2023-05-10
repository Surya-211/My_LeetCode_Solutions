class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n,vector<int>(n,0));
        int k=1;
        int right=1;
        int left=0;
        int up=0;
        int down=0;
        int rs=0;
        int re=n-1;
        int cs=0;
        int ce=n-1;
        while(k<=n*n)
        {
            if(right==1)
            {
                for(int i=cs;i<=ce;i++)
                    v[rs][i]=k++;
                rs++;
                down=1;
                right=0;
            }
            if(down==1)
            {
                for(int i=rs;i<=re;i++)
                    v[i][ce]=k++;
                ce--;
                down=0;
                left=1;
            }
            if(left==1)
            {
                for(int i=ce;i>=cs;i--)
                    v[re][i]=k++;
                left=0;
                re--;
                up=1;
            }
            if(up==1)
            {
                for(int i=re;i>=rs;i--)
                    v[i][cs]=k++;
                right=1;
                up=0;
                cs++;
            }
        }
        return v;
    }
};