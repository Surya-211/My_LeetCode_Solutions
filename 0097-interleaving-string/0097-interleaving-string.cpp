class Solution {
public:
    bool func(string &s1,string &s2,string &s3,int ind1,int ind2,int ind3,vector<vector<int>>&dp)
    {
        if(ind3<0)
        {
            if(ind1<0 && ind2<0)
                return true;
            else
                return false;
        }
        if(ind1>=0 && ind2>=0 && dp[ind1][ind2]!=-1)
            return dp[ind1][ind2];
        if(ind1>=0 && ind2>=0 && s1[ind1]==s3[ind3] && s2[ind2]==s3[ind3])
            return dp[ind1][ind2]=func(s1,s2,s3,ind1-1,ind2,ind3-1,dp) | func(s1,s2,s3,ind1,ind2-1,ind3-1,dp);
        
        else if(ind1>=0 && s1[ind1]==s3[ind3])
            return func(s1,s2,s3,ind1-1,ind2,ind3-1,dp);
        
        else if(ind2>=0 && s2[ind2]==s3[ind3])
            return func(s1,s2,s3,ind1,ind2-1,ind3-1,dp);
        
        else
            return false;
    }
    bool isInterleave(string s1, string s2, string s3) {
        if((s1.size()+s2.size()) != s3.size())
            return false;
        int ss1=s1.size();
        int ss2=s2.size();
        vector<vector<int>>dp(ss1,vector<int>(ss2,-1));
        return func(s1,s2,s3,s1.size()-1,s2.size()-1,s3.size()-1,dp);
    }   
};