class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        vector<int>v;
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            int c=i+1;
            int d1=c*nums[i]-s;
            int d2=(sum-s)-((nums.size()-c)*nums[i]);
            int d=d1+d2;
            v.push_back(d);
        }
        return v;
    }
};