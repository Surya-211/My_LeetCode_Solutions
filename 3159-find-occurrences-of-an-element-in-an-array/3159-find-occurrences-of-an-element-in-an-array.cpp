class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        unordered_map<int,int>m;
        int count=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==x)
            {
                m[count++]=i;
            }
        }
        vector<int>v;
        for(int i=0;i<queries.size();i++)
        {
            if(m.find(queries[i])!=m.end())
                v.push_back(m[queries[i]]);
            else
                v.push_back(-1);
        }
        return v;
    }
};