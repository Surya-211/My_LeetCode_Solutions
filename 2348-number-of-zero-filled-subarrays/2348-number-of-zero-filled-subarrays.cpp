class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        
        long long count=0;
        int flag=0;
        long long n=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                n++;
                flag=1;
            }
            else
            {
                flag=0;
                count+=n*(n+1)/2;
                n=0;
            }
        }
        if(flag==1)
        {
            count+=n*(n+1)/2;
        }
        return count;
    }
};