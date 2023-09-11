class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int,vector<int>>m;
        for(int i=0;i<groupSizes.size();i++)
        {
            m[groupSizes[i]].push_back(i);
        }
        vector<vector<int>>ans;
        for(auto i:m)
        {
            int a=i.first;
            vector<int>b=i.second;
            int c=0;
            while(c<b.size())
            {
                vector<int>v;
                for(int i=0;i<a;i++)
                {
                    v.push_back(b[c++]);
                }
                ans.push_back(v);
            }
        }
        return ans;
    }
};