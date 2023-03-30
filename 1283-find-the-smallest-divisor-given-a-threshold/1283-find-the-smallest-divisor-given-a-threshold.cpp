class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            maxi=max(maxi,nums[i]);
        }
        int low=1;
        int high=maxi;
        while(low<high)
        {
            int mid=(low+high)/2;
            int sum=0;
            for(int i=0;i<nums.size();i++)
            {
                int a=nums[i]/mid;
                if(mid*a!=nums[i])
                    a++;
                sum+=a;
            }
            if(sum>threshold)
                low=mid+1;
            else
                high=mid;
        }
        return low;
    }
};