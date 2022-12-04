class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int min=INT_MAX;
        long long sum=0;
        int avg=0;
        int ind=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        long long lsum=0;
        long long rsum=sum;
        for(int i=0;i<n;i++)
        {
            lsum=lsum+nums[i];
            rsum=rsum-nums[i];
            if(i==n-1)
                avg=lsum/n;
            else
                avg=abs((lsum/(i+1))-(rsum/(n-i-1)));
            
            if(avg<min)
            {
                min=avg;
                ind=i;
            }
        }
        return ind;
    }
};