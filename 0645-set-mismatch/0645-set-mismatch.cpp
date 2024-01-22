class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>v;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(int i=1;i<=nums.size();i++)
        {
            if(m[i]==2)
                v.push_back(i);
        }
        for(int i=1;i<=nums.size();i++)
        {
            if(m[i]==0)
                v.push_back(i);
            
        }
        return v;
    }
};