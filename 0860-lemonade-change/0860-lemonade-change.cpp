class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        unordered_map<int,int>m;
        int flag=1;
        for(int i=0;i<bills.size();i++)
        {
            int pay=bills[i];
            if(pay==5)
            {
                m[5]++;
            }
            else if(pay==10)
            {
                if(m[5]>=1)
                {
                    m[5]--;
                    m[10]++;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            else
            {
                if(m[10]>=1&&m[5]>=1)
                {
                    m[10]--;
                    m[5]--;
                }
                else if(m[5]>=3)
                {
                    m[5]-=3;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            
        }
        return flag;
        
    }
};