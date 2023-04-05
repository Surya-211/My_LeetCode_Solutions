class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        for(int i=0;i<nums.size();i++)
        {
            int target=-1*nums[i];
            int left=i+1;
            int right=nums.size()-1;
            while(left<right)
            {
                int sum=nums[left]+nums[right];
                if(sum==target)
                {
                    vector<int>a;
                    a.push_back(nums[i]);
                    a.push_back(nums[left]);
                    a.push_back(nums[right]);
                    if(s.find(a)==s.end())
                    s.insert(a);
                    left++;
                    right--;
                }
                else if(sum<target)
                    left++;
                else
                    right--;
            }
        }
        vector<vector<int>>v;
        for(auto i:s)
        {
            v.push_back(i);
        }
        return v;
    }
};