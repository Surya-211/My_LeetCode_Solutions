class Solution {
public:
    int countHomogenous(string s) {
        int mod=1e9+7;
        int ans=0;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(i==0 || s[i]==s[i-1])
            {
                cnt++;
            }
            else
            {
                cnt=1;
            }
            ans=(ans+cnt)%mod;
        }
        return ans;
    }
};