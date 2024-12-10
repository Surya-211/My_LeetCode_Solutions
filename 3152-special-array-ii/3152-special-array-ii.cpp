class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int>v(n,0);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]%2==0 && nums[i-1]%2==0)
                v[i]=v[i-1]+1;
            else if(nums[i]%2==1 && nums[i-1]%2==1)
                v[i]=v[i-1]+1;
            else
                v[i]=v[i-1];
        }
        vector<bool>ans;
        for(int i=0;i<queries.size();i++)
        {
            int a=queries[i][0];
            int b=queries[i][1];
            int diff=v[b]-v[a];
            if(diff>0)
                ans.push_back(false);
            else
                ans.push_back(true);
        }
        return ans;
    }
};