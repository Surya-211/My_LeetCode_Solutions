class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        
        while(nums.size()!=1)
        {
            vector<int>v;
            int i=0;
            while(i<nums.size())
            {
                int n1=nums[i++];
                int n2=nums[i++];
                v.push_back(min(n1,n2));
                if(nums.size()==2)
                    break;
                int n3=nums[i++];
                int n4=nums[i++];
                v.push_back(max(n3,n4));
            }
            nums=v;
        }
        return nums[0];
    }
};