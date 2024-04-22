class Solution {
public:
    int checkPrime(int n)
    {
        if(n==1)
            return 0;
        if(n==2)
            return 1;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
                return 0;
        }
        return 1;   
    }
    int maximumPrimeDifference(vector<int>& nums) {
        vector<int>v(101,0);
        for(int i=1;i<=100;i++)
        {
            v[i]=checkPrime(i);
        }
        int mini=-1;
        int maxi=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(v[nums[i]]==1)
            {
                if(mini==-1)
                {
                    mini=i;
                }
                maxi=i-mini;
            }
        }
        return maxi;
    }
};