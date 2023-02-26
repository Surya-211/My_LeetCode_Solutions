class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int>m1;
        for(int i=0;i<nums[0].size();i++)
        {
            m1[nums[0][i]]++;
        }
        for(int i=1;i<nums.size();i++)
        {
            unordered_map<int,int>m2;
            for(int j=0;j<nums[i].size();j++)
            {
                m2[nums[i][j]]++;
            }
            for(auto i:m1)
            {
                if(m2.find(i.first)==m2.end())
                {
                    m1[i.first]=0;
                }
            }
        }
        vector<int>v;
        for(auto i:m1)
        {
            if(i.second==1)
                v.push_back(i.first);
        }
        sort(v.begin(),v.end());
        return v;
    }
};