class Solution {
public:
    
    class soldier
    {
        public:
        int c;
        int row;
    };
    
    static bool comparator(soldier s1,soldier s2)
    {
        if(s1.c<s2.c)
            return true;
        else if(s1.c==s2.c)
        {
            if(s1.row<s2.row)
                return true;
            else
                return false;
        }
        else
            return false;
    }
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
      
        vector<soldier>v;
        for(int i=0;i<mat.size();i++)
        {
            int count=0;
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                    count++;
            }
            soldier s;
            s.c=count;
            s.row=i;
            v.push_back(s);
        }
        sort(v.begin(),v.end(),comparator);
        vector<int>a;
        for(int i=0;i<v.size();i++)
        {
            if(i==k)
                break;
            soldier s=v[i];
            a.push_back(s.row);
        }
        return a;
    }
};