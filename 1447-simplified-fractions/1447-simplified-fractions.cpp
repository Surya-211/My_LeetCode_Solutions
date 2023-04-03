class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        
        vector<string>v;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(i==1 || check(i,j)==1)
                {
                    string s=to_string(i)+'/'+to_string(j);
                    v.push_back(s);
                }
            }
        }
        return v;
    }
    
    int check(int j,int k)
    {
        int mini=min(j,k);
        for(int i=2;i<=mini;i++)
        {
            if(j%i==0&&k%i==0)
                return 0;
        }
        return 1;
    }
};