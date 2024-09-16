class Solution {
public:
    int func(string& s,string& t,int ind1,int ind2,vector<vector<int>>&dp)
    {
        if(ind1<0 || ind2<0)
            return 0;
        if(dp[ind1][ind2]!=-1)
            return dp[ind1][ind2];
        if(s[ind1]==t[ind2])
        {
            return dp[ind1][ind2]=1+func(s,t,ind1-1,ind2-1,dp);
        }
        else
            return dp[ind1][ind2]=max(func(s,t,ind1-1,ind2,dp),func(s,t,ind1,ind2-1,dp));
    }
    int longestPalindromeSubseq(string s) {
        string t=s;
        reverse(t.begin(),t.end());
        int n=s.size();
        int m=t.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return func(s,t,n-1,m-1,dp);
    }
};