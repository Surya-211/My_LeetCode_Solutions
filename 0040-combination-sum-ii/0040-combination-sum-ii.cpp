class Solution {
public:
    void func(vector<int>v,int ind,int sum,int target,vector<int>&ds,vector<vector<int>>&ans)
    {
        if(sum>target)
            return;
        if(sum==target)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<v.size();i++)
        {
            if(i>ind && v[i]==v[i-1])
                continue;
            ds.push_back(v[i]);
            func(v,i+1,sum+v[i],target,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        int i=0;
        int sum=0;
        vector<int>ds;
        vector<vector<int>>ans;
        func(candidates,i,sum,target,ds,ans);
        return ans;
    }
};