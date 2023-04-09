class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        
        int p=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[0].size();j++)
            {
                if(i==j||i+j==nums.size()-1)
                {
                    int n=nums[i][j];
                    if(n==1)
                        continue;
                    if(isPrime(n)==true)
                    {
                        if(n>p)
                            p=n;
                    }
                }
            }
        }
        return p;
        
    }
    
    bool isPrime(int n)
    {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
};