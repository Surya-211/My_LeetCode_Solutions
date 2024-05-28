class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int j=0;
        int maxi=0;
        int sum=0;
        int i;
        for(i=0;i<s.size();i++)
        {
            int diff=abs(s[i]-t[i]);
            sum+=diff;
            if(sum>maxCost)
            {
                maxi=max(maxi,i-j);
                while(sum>maxCost)
                {
                    sum-=abs(s[j]-t[j]);
                    j++;
                }
            }
        }
        maxi=max(maxi,i-j);
        return maxi;
    }
};