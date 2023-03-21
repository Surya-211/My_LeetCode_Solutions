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
                if(n%2==0)
                count+=n/2*(n+1);
            else
                count+=(n+1)/2*n;
                n=0;
            }
        }
        if(flag==1)
        {
            if(n%2==0)
                count+=n/2*(n+1);
            else
                count+=(n+1)/2*n;
        }
        return count;
    }
};