class Solution {
public:
    bool primeSubOperation(vector<int>& nums) {
        
        int k=nums[0];
        for(int i=k-1;i>=1;i--)
        {
            if(prime(i)==true)
            {
                nums[0]=nums[0]-i;
                break;
            }
        }
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<=nums[i-1])
                return false;
            int n=0;
            for(int j=nums[i]-1;j>=1;j--)
            {
                if(prime(j)==true && nums[i]-j>nums[i-1])
                {
                    n=j;
                    break;
                }
            }
            nums[i]-=n;
        }
        return true;
    }
    bool prime(int n)
    {
        if(n==1)
            return false;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
};