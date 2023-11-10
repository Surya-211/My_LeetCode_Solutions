class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        vector<int>v;
        unordered_map<int,vector<int>>m;
        for(int i=0;i<adjacentPairs.size();i++)
        {
            m[adjacentPairs[i][0]].push_back(adjacentPairs[i][1]);
            m[adjacentPairs[i][1]].push_back(adjacentPairs[i][0]);
        }
        int unique;
        for(auto i:m)
        {
            if(i.second.size()==1)
            {
                unique=i.first;
                break;
            }
        }
        v.push_back(unique);
        int prev=unique;
        int num=m[unique][0];
        v.push_back(num);
        while(true)
        {
            int s=m[num].size();
            if(s==1)
            {
                break;
            }
            else
            {
                if(m[num][0]==prev)
                {
                    prev=num;
                    v.push_back(m[num][1]);
                    num=m[num][1];
                }
                else
                {
                    prev=num;
                    v.push_back(m[num][0]);
                    num=m[num][0];
                }
            }
        }
        return v;
    }
};