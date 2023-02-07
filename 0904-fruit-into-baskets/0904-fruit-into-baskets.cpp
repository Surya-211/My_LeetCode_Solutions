class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int msum=0;
        unordered_map<int,int>m;
        int ind=0;
        for(int i=0;i<fruits.size();i++)
        {
            int n=fruits[i];
            m[n]++;
            if(m.size()>2)
            {
                while(m.size()!=2)
                {
                    m[fruits[ind]]--;
                    if(m[fruits[ind]]==0)
                    {
                        m.erase(fruits[ind]);
                    }
                    ind++;
                }
            }
            if(m.size()<=2)
            {
                int sum=i-ind+1;
                msum=max(sum,msum);
            }
        }
         return msum;       
    }
};