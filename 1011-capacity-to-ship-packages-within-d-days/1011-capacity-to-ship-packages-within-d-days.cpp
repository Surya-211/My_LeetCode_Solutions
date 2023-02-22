class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int sum=0;
        for(int i=0;i<weights.size();i++)
        {
            sum+=weights[i];
        }
        int n=sum/days;
        while(true)
        {
            int s=0;
            int count=0;
            int flag=1;
            for(int i=0;i<weights.size();i++)
            {
                if(s>n)
                {
                    flag=0;
                    break;
                }
                if(s+weights[i]<=n)
                {
                    s=s+weights[i];
                }
                else
                {
                    count++;
                    s=weights[i];
                }
            }
            if(flag==0||s>n)
            {
                n++;
                continue;
            }
            count++;
            if(count>days)
            {
                n++;
            }
            else
                break;
        }
        return n;
    }
};