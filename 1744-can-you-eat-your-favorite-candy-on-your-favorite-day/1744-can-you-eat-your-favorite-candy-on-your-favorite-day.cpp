class Solution {
public:
    vector<bool> canEat(vector<int>& candiesCount, vector<vector<int>>& queries) {
        int n=candiesCount.size();
        vector<long long int>v(n,0);
        v[0]=candiesCount[0];
        for(int i=1;i<candiesCount.size();i++)
        {
            v[i]=v[i-1]+candiesCount[i];
        }
        vector<bool>ans;
        for(int i=0;i<queries.size();i++)
        {
            int a=queries[i][0];
            int b=queries[i][1];
            int c=queries[i][2];
            long long int mn=b;
            long long int mx=(b+1)*(long long int)c;
            if(mn>=v[a] || mx<=(a>0?v[a-1]:0))
                ans.push_back(false);
            else
                ans.push_back(true);
        }
        return ans;
    }
};
