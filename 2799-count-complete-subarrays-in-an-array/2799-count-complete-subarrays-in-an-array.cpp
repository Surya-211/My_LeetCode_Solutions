class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        unordered_map<int,int>m;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            set<int>k;
            for(int j=i;j<nums.size();j++)
            {
                k.insert(nums[j]);
                if(k.size()==s.size())
                    count++;
                if(k.size()>s.size())
                    break;
            }
        }
        return count;
    }
};