class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int>v(n,0);
        v[0]=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            v[i]=v[i-1]^arr[i];
        }
        vector<int>ans;
        for(int i=0;i<queries.size();i++)
        {
            int l=queries[i][0];
            int r=queries[i][1];
            if(l==0)
                ans.push_back(v[r]);
            else
                ans.push_back(v[r]^v[l-1]);
        }
        return ans;
    }
};