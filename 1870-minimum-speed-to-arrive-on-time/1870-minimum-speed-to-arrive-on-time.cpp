class Solution {
public:
    
    double calculateTime(vector<int>dist,int speed)
    {
        double time=0;
        for(int i=0;i<dist.size();i++)
        {
            double t=(double)dist[i]/(double)speed;
            if(i==dist.size()-1)
                time+=t;
            else
                time+=ceil(t);
        }
        return time;
    }
    
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int left=1;
        int right=1000000000;
        int flag=0;
        while(left<right)
        {
            int mid=(left+right)/2;
            if(calculateTime(dist,mid)<=hour)
            {
                flag=1;
                right=mid;
            }
            else
                left=mid+1;
        }
        if(flag==0)
            return -1;
        return right;
    }
};