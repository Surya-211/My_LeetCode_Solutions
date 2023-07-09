class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count=0;
        int k=-1;
        int ind=-1;
        for(int i=0;i<nums.size();i++)
        {
            int inc=0;
            int dec=0;
            for(int j=i-1;j>=0;j--)
            {
                if(nums[j]>nums[i])
                {
                    inc=1;
                    break;
                }
                else if(nums[j]<nums[i])
                {
                    dec=1;
                    break;
                }
            }
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]!=nums[i])
                {
                    if(nums[j]>nums[i] && inc==1)
                    {
                        count++;
                        if(k==1 && ind==i-1)
                            count--;
                        k=1;
                        ind=i;
                        break;
                    }
                    else if(nums[j]<nums[i] && dec==1)
                    {
                        count++;
                        if(k==0 && ind==i-1)
                            count--;
                        k=0;
                        ind=i;
                        break;
                    }
                }
            }
        }
        return count;
    }
};