class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            int n=nums[i];
            vector<int>a;
            while(n>0)
            {
                a.push_back(n%10);
                n/=10;
            }
            while(a.size()>0)
            {
                v.push_back(a.back());
                a.pop_back();
            }
        }
        return v;
    }
};