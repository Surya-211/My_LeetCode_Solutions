class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int>ans=nums;
        
        sort(ans.begin(),ans.end());
        
        unordered_map<int,int>mp;
        mp[ans[0]]=0;
        for(int i=1;i<nums.size();i++)
        {
            if(ans[i]==ans[i-1])
                continue;
            mp[ans[i]]=i;
        }
        for(int i=0;i<nums.size();i++)
        {
            ans[i]=mp[nums[i]];
        }
        return ans;
    }
};