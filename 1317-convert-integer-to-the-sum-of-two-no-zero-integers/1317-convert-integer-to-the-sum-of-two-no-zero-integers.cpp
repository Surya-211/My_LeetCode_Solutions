class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        
        int i=1;
        int j=n-1;
        vector<int>v;
        while(true)
        {
            int ci=i;
            int cj=j;
            int flag=1;
            while(ci>0)
            {
                if(ci%10==0)
                {
                    flag=0;
                    break;
                }
                ci/=10;
            }
            while(cj>0)
            {
                if(cj%10==0)
                {
                    flag=0;
                    break;
                }
                cj/=10;
            }
            if(flag==1)
            {
                v.push_back(i);
                v.push_back(j);
                break;
            }
            i++;
            j--;
        }
        return v;
    }
};