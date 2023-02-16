class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        int mini=INT_MAX;
        for(int i=1;i<arr.size();i++)
        {
            mini=min(arr[i]-arr[i-1],mini);
        }
        vector<vector<int>>v;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]-arr[i-1]==mini)
            {
                vector<int>a;
                a.push_back(arr[i-1]);
                a.push_back(arr[i]);
                v.push_back(a);
            }
        }
        return v;
    }
};