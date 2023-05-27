class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>v;
        if(k==0)
        {
            for(int i=0;i<code.size();i++)
            {
                v.push_back(0);
            }
            return v;
        }
        int n=code.size();
        if(k>0)
        {
            for(int i=0;i<code.size();i++)
            {
                int sum=0;
                for(int j=1;j<=k;j++)
                {
                    sum+=code[(i+j)%n];
                }
                v.push_back(sum);
            }
            return v;
        }
        if(k<0)
        {
            for(int i=0;i<code.size();i++)
            {
                int sum=0;
                for(int j=1;j<=abs(k);j++)
                {
                    sum+=code[(i+n-j)%n];
                }
                v.push_back(sum);
            }
            return v;
        }
        return v;
    }
};