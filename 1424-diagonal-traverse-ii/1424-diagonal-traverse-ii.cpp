class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        unordered_map<int,vector<pair<int,int>>>m;
        int maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                m[i+j].push_back({i,nums[i][j]});
                maxi=max(maxi,i+j);
            }
        }
        vector<int>ans;
        for(int i=0;i<=maxi;i++)
        {
            vector<pair<int,int>>v=m[i];
            sort(v.begin(),v.end(),greater<pair<int,int>>());
            for(int j=0;j<v.size();j++)
            {
                ans.push_back(v[j].second);
            }
        }
        return ans;
    }
};