class Solution {
public:
    
    int t[1002];
    //memset(t,-1,sizeof(t));
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n=cost.size();
        for(int i=0;i<1002;i++)
            t[i]=-1;
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