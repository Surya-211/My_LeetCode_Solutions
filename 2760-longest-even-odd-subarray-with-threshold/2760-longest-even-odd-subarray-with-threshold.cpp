class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            int count=0;
            if(nums[i]%2==0 && nums[i]<=threshold)
            {
                if(i==nums.size()-1 && nums[i]<=threshold)
                    maxi=max(maxi,1);
                else
                {
                    for(int j=i;j<nums.size()-1;j++)
                    {
                        if(nums[j]%2!=nums[j+1]%2)
                        {
                            if(nums[j]<=threshold && nums[j+1]<=threshold)
                            {
                                if(count==0)
                                    count=2;
                                else
                                    count++;
                                maxi=max(count,maxi);
                            }
                            else if(nums[j]<=threshold)
                            {
                                count=1;
                                break;
                            }
                        }
                        else if(nums[j]%2==0 && nums[j]<=threshold)
                        {
                            count=1;
                            break;
                        }
                        else
                            break;
                    }
                }
            }
            maxi=max(count,maxi);
        }
        return maxi;
    }
};