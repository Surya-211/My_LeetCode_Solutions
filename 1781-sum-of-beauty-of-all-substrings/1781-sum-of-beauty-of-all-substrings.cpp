class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            unordered_map<char,int>m;
            for(int j=i;j<s.size();j++)
            {   
                m[s[j]]++;
                int maxi=INT_MIN;
                int mini=INT_MAX;
                for(auto a:m)
                {
                    if(a.second>0)
                    {
                        maxi=max(maxi,a.second);
                        mini=min(mini,a.second);
                    }
                }
                sum+=maxi-mini;
            }
        }
        return sum;
    }
};