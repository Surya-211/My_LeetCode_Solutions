class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        priority_queue<int>ls;
        priority_queue<int,vector<int>,greater<int>>gs;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<k)
                ls.push(nums[i]);
            else
                gs.push(nums[i]);
        }
        int s=nums.size();
        long long count=0;
        if(ls.size()==gs.size())
        {
            return gs.top()-k;
        }
        else if(ls.size()>gs.size())
        {
            int l=ls.size();
            int g=gs.size();
            while(g<l)
            {
                count+=k-ls.top();
                ls.pop();
                g++;
                l--;
            }
        }
        else
        {
            int l=ls.size();
            int g=gs.size();
            while(g>=l)
            {
                count+=gs.top()-k;
                gs.pop();
                g--;
                l++;
            }
        }
        return count;
    }
};