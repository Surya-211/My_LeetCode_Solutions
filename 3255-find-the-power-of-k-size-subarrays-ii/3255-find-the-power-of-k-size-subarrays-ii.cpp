class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        if(k==1)
            return nums;
        vector<int>ans;
        int ind=1;
        int count=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<=nums[i-1] || nums[i]-nums[i-1]>1)
            {
                count++;
            }
            if(i>=k-1)
            {
                if(count==0)
                    ans.push_back(nums[i]);
                else
                    ans.push_back(-1);
                if(nums[ind]<=nums[ind-1] || nums[ind]-nums[ind-1]>1)
                    count--;
                ind++;
            }
        }
        return ans;
    }
};