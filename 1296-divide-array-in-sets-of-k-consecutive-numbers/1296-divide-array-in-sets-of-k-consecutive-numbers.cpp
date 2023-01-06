class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n=nums.size();
        if(n%k!=0)
            return false;
        sort(nums.begin(),nums.end());
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int flag=1;
        for(int i=0;i<nums.size();i++)
        {
            if(m[nums[i]]==0)
            {
                continue;
            }
            else
            {
                for(int j=0;j<k;j++)
                {
                    if(!(m[nums[i]+j]>0))
                    {
                        flag=0;
                        break;
                    }
                    m[nums[i]+j]--;
                }
                if(flag==0)
                    break;
            }
        }
        if(flag==0)
            return false;
        return true;
        
    }
};