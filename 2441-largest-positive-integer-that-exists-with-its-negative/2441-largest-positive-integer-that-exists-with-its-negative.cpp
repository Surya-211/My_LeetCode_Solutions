class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int max=-1;
        for(auto i:m)
        {
            if(i.first>0 && m.find(-1*i.first)!=m.end())
            {
                if(i.first>max)
                    max=i.first;
            }
        }
        return max;
    }
};