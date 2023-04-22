class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        
        
        int div=INT_MAX;
        int count=0;
        for(int i=0;i<divisors.size();i++)
        {
            int c=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]%divisors[i]==0)
                    c++;
            }
            if(c>count)
            {
               div=divisors[i];
                count=c;
            }
            else if(count==c)
                if(divisors[i]<div)
                    div=divisors[i];
        }
        return div;
    }
};