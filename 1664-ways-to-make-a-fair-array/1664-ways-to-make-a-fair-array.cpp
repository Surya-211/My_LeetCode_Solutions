class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        unordered_map<int,int>m;
        int sum_even=0;
        int sum_odd=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                sum_even+=nums[i];
                m[i]=sum_even;
            }
            else
            {
                sum_odd+=nums[i];
                m[i]=sum_odd;
            }
        }
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0 || i==nums.size()-1)
            {
                if(i%2==0)
                {
                    if(sum_even-nums[i]-sum_odd==0)
                        count++;
                }
                else
                {
                    if(sum_odd-nums[i]-sum_even==0)
                        count++;
                }
            }
            else
            {
                if(i%2==0)
                {
                    int s=sum_even-nums[i];
                    int s1=m[i]-nums[i];
                    s1+=sum_odd-m[i-1];
                    int s2=m[i-1];
                    s2+=sum_even-m[i];
                    if(s1-s2==0)
                        count++;
                }
                else
                {
                    int s=sum_odd-nums[i];
                    int s1=m[i]-nums[i];
                    s1+=sum_even-m[i-1];
                    int s2=m[i-1];
                    s2+=sum_odd-m[i];
                    if(s1-s2==0)
                        count++;
                }
            }
        }
        return count;
    }
};