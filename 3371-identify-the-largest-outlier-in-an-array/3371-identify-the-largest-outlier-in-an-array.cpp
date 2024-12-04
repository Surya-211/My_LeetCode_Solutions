class Solution {
public:
    int getLargestOutlier(vector<int>& nums) {
        unordered_map<int,int>m;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            m[2*nums[i]]++;
        }
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i];
            int target=sum-num;
            if(m[target]>1 || (m[target]==1 && target!=num*2))
                maxi=max(maxi,num);
        }
        return maxi;
    }
};