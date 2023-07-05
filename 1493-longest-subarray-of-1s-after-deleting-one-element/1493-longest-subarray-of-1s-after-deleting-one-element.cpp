class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zero=0;
        int maxi=0;
        int ind=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                zero++;
            if(zero>1)
            {
                while(zero>1)
                {
                    if(nums[ind]!=0)
                    {
                        ind++;
                        continue;
                    }
                    ind++;
                    zero--;
                    break;
                }
            }
            maxi=max(maxi,i-ind);
        }
        return maxi;
    }
};