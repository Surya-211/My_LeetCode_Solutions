class Solution {
public:
    
    int f(vector<string>v,vector<int>&dp,int i,string s,unordered_map<string,int>m,int n)
    {
        if(i>=n)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int flag=0;
        int mini=1+f(v,dp,i+1,s,m,n);
        for(int j=1;j<=n-i;j++)
        {
            string str=s.substr(i,j);
            if(m.find(str)!=m.end())
                mini=min(mini,f(v,dp,i+j,s,m,n));
        }
        return dp[i]=mini;
    }
    
    int minExtraChar(string s, vector<string>& dic) {
        unordered_map<string,int>m;
        for(int i=0;i<dic.size();i++)
        {
            m[dic[i]]++;
        }
        int n=s.size();
        vector<int>dp(n,-1);
        return f(dic,dp,0,s,m,n);
        
    }
};