class Solution {
public:
    void func(int i,int count,int sum,int k,int n,vector<int>&ds,vector<vector<int>>&ans)
    {
        if(sum>n)
            return;
        if(count==k)
        {
            if(sum==n)
            {
                ans.push_back(ds);
            }
            return;
        }
        if(i==10)
            return;
        ds.push_back(i);
        func(i+1,count+1,sum+i,k,n,ds,ans);
        ds.pop_back();
        func(i+1,count,sum,k,n,ds,ans);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>ds;
        int i=1;
        func(i,0,0,k,n,ds,ans);
        return ans;
    }
};