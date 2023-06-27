class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>>v;
        int m=nums1.size();
        int n=nums2.size();
        set<pair<int,int>>s;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>q;
        q.push({nums1[0]+nums2[0],{0,0}});
        s.insert({0,0});
        while(k--&&!q.empty())
        {
            auto top=q.top();
            int i=top.second.first;
            int j=top.second.second;
            q.pop();
            v.push_back({nums1[i],nums2[j]});
            if(i+1<m && s.find({i+1,j})==s.end())
            {
                q.push({nums1[i+1]+nums2[j],{i+1,j}});
                s.insert({i+1,j});
            }
            if(j+1<n && s.find({i,j+1})==s.end())
            {
                q.push({nums1[i]+nums2[j+1],{i,j+1}});
                s.insert({i,j+1});
            }
        }
        return v;
    }
};