class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int>m;
        for(int i=0;i<edges.size();i++)
        {
            int a=edges[i][0];
            int b=edges[i][1];
            m[a]++;
            m[b]++;
        }
        int n=m.size();
        for(auto i:m)
        {
            if(i.second==n-1)
                return i.first;
        }
        return 0;
    }
};