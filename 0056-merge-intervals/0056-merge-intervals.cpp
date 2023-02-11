class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>>v;
        
        sort(intervals.begin(),intervals.end());
        
        for(int i=0;i<intervals.size();i++)
        {
            if(v.size()==0)
            {
                v.push_back(intervals[i]);
                continue;
            }
            else
            {
                vector<int>a=v.back();
                if(a[1]>=intervals[i][0])
                {
                    v.pop_back();
                    v.push_back({a[0],max(a[1],intervals[i][1])});
                }
                else
                    v.push_back(intervals[i]);
            }
        }
        return v;
    }
};