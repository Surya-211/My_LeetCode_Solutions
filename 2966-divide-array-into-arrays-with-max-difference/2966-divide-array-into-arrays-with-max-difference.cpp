class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        for(int i=2;i<nums.size();i+=3)
        {
            if(nums[i]-nums[i-2]>k)
                return v;
        }
        int i=0;
        while(i<nums.size())
        {
            vector<int>a;
            for(int j=1;j<=3;j++)
            {
                if(i<nums.size())
                {
                    a.push_back(nums[i]);
                    i++;
                }
            }
            v.push_back(a);
        }
        return v;
    }
};