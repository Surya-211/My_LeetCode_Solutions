class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        int up=0;
        int down=0;
        int left=0;
        int right=0;
        right=1;
        int sr=0;
        int er=matrix.size()-1;
        int sc=0;
        int ec=matrix[0].size()-1;
        int s=matrix.size()*matrix[0].size();
        while(v.size()!=s)
        {
            if(right==1)
            {
                for(int i=sc;i<=ec;i++)
                    v.push_back(matrix[sr][i]);
                
                right=0;
                down=1;
                sr=sr+1;
                if(v.size()==s)
                    break;
            }
            if(down==1)
            {
                for(int i=sr;i<=er;i++)
                    v.push_back(matrix[i][ec]);
                
                down=0;
                left=1;
                ec=ec-1;
                if(v.size()==s)
                    break;
            }
            if(left==1)
            {
                for(int i=ec;i>=sc;i--)
                    v.push_back(matrix[er][i]);
                
                left=0;
                up=1;
                er=er-1;
                if(v.size()==s)
                    break;
            }
            if(up==1)
            {
                for(int i=er;i>=sr;i--)
                    v.push_back(matrix[i][sc]);
                
                up=0;
                right=1;
                sc=sc+1;
                if(v.size()==s)
                    break;
            }
        }
        return v;
    }
};