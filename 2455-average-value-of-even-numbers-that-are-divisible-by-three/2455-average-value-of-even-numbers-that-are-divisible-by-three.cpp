class Solution {
public:
    int averageValue(vector<int>& nums) {
        
        int sum=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            int n=nums[i];
            if(n%2==0)
            {
                if(n%3==0)
                {
                    sum+=n;
                    count++;
                }
            }
        }
        if(count==0)
            return 0;
        return sum/count;
        
    }
};