class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            int n=nums[i];
            if(s.find(n-1)==s.end())
            {
                int num=nums[i];
                int c=1;
                while(s.find(num+1)!=s.end())
                {
                    c++;
                    num++;
                }
                
                count=max(c,count);
            }
        }
        return count;
    }
};