class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());
        // int left=0;
        // int right=nums.size()-1;
        // int count=0;
        // while(left<right)
        // {
        //     int sum=nums[left]+nums[right];
        //     if(sum==k)
        //     {
        //         count++;
        //         left++;
        //         right--;
        //     }
        //     else if(sum<k)
        //         left++;
        //     else
        //         right--;
        // }
        // return count;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(m[nums[i]]==0)
                continue;
            int x=k-nums[i];
            if(x==nums[i] && m[x]==1)
                continue;
            if(m.find(x)!=m.end() &&m[x]>0)
            {
                count++;
                m[x]--;
                m[nums[i]]--;
            }
            if(m[nums[i]]<=0)
                m.erase(nums[i]);
            if(m[x]<=0)
                m.erase(x);
        }
        return count;
    }
};