class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        
        vector<vector<int>>ans;
        int i=0;
        int j=0;
        while(i!=firstList.size() && j!=secondList.size())
        {
            if(firstList[i][0]<secondList[j][0] && firstList[i][1]<secondList[j][0])
            {
                i++;
                continue;
            }
            if(secondList[j][0]<firstList[i][0] && secondList[j][1]<firstList[i][0])
            {
                j++;
                continue;
            }
            int a=max(firstList[i][0],secondList[j][0]);
            int b=min(firstList[i][1],secondList[j][1]);
            vector<int>v;
            v.push_back(a);
            v.push_back(b);
            ans.push_back(v);
            if(firstList[i][1]<secondList[j][1])
                i++;
            else
                j++;
        }
        return ans;
    }
};