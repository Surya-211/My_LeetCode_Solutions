class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        
        unordered_map<int,int>row;
        unordered_map<int,int>col;
        int m=mat[0].size();
        int n=mat.size();
        unordered_map<int,pair<int,int>>mp;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                int num=mat[i][j];
                pair<int,int>p;
                p.first=i;
                p.second=j;
                mp[num]=p;
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            int num=arr[i];
            pair<int,int>p=mp[num];
            int r=p.first;
            int c=p.second;
            row[r]++;
            col[c]++;
            if(row[r]==m)
                return i;
            if(col[c]==n)
                return i;
        }
        return 0;
    }
};