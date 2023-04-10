class Solution {
public:
    int specialArray(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n=nums[nums.size()-1];
        int ans=-1;
        for(int i=1;i<=n;i++)
        {
            int low=0;
            int high=nums.size()-1;
            while(low<high)
            {
                int mid=(low+high)/2;
                if(nums[mid]<i)
                    low=mid+1;
                else
                    high=mid;
            }
            int diff=nums.size()-low;
            if(i==diff)
                return i;
        }
        return ans;
    }
};