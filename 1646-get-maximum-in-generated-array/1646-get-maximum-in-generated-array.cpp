class Solution {
public:
    int getMaximumGenerated(int n) {
        
        int t[250];
        t[0]=0;
        t[1]=1;
        int j=1;
        for(int i=2;i<=n;i++)
        {
            t[2*j]=t[j];
            t[2*j+1]=t[j]+t[j+1];
            j++;
        }
        int maxi=0;
        for(int i=0;i<=n;i++)
        {
            maxi=max(maxi,t[i]);
        }
        return maxi;
    }
};