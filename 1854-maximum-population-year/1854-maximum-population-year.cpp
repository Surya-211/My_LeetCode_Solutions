class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int>v(3000,0);
        for(int i=0;i<logs.size();i++)
        {
            int a=logs[i][0];
            int b=logs[i][1];
            for(int k=a;k<b;k++)
            {
                v[k]++;
            }
        }
        int ans=0;
        int maxi=INT_MIN;
        for(int i=1950;i<=2050;i++)
        {
            if(v[i]>maxi)
            {
                maxi=v[i];
                ans=i;
            }
        }
        return ans;
    }
};