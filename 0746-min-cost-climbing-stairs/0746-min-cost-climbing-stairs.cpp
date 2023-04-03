class Solution {
public:
    
    int t[1002];
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n=cost.size();
        memset(t,-1,sizeof(t));
        int c1=climb(cost,0,n);
        int c2=climb(cost,1,n);
        return min(c1,c2);
    }
    
    int climb(vector<int>v,int i,int n)
    {
        if(i==n)
            return 0;
        if(i==n-1)
            return v[i];
        if(t[i]!=-1)
            return t[i];
        
        return t[i]=min((v[i]+climb(v,i+1,n)),v[i]+climb(v,i+2,n));
    }
};