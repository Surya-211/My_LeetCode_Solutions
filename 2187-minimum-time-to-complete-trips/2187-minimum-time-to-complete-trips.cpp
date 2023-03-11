class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        
        long long max=0;
        for(int i=0;i<time.size();i++)
        {
            if(time[i]>max)
                max=time[i];
        }
        long long low=0;
        long long high=max*totalTrips;
        while(low<high)
        {
            long long mid=(low+high)/2;
            if(isPossible(time,mid,totalTrips))
                high=mid;
            else
                low=mid+1;
        }
        return low;
    }
    
    bool isPossible(vector<int> time,long long t,int total)
    {
        long long sum=0;
        for(int i=0;i<time.size();i++)
        {
            sum+=t/time[i];
        }
        if(sum>=total)
            return true;
        else
            return false;
    }
    
};