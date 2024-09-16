class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>v;
        for(int i=0;i<timePoints.size();i++)
        {
            string hr=timePoints[i].substr(0,2);
            string min=timePoints[i].substr(3,2);
            int total=stoi(hr)*60+stoi(min);
            v.push_back(total);
        }
        sort(v.begin(),v.end());
        int mini=INT_MAX;
        for(int i=1;i<v.size();i++)
        {
            mini=min(mini,v[i]-v[i-1]);
        }
        mini=min(mini,abs(v[v.size()-1]-v[0]-1440));
        return mini;
    }
};