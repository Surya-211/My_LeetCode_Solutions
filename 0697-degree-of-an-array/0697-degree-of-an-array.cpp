class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int max_count=1;
        for(auto i:m)
        {
            if(i.second>max_count)
            {
                max_count=i.second;
            }
        }
        
        int mini=INT_MAX;;
        for(auto i:m)
        {
            if(i.second==max_count)
            {
                int n=i.first;
                int start=0;
                int end=0;
                int flag=0;
                for(int i=0;i<nums.size();i++)
                {
                    if(nums[i]==n)
                    {
                        if(flag==0)
                        {
                            flag=1;
                            start=i;
                            end=i;
                        }
                        else
                            end=i;
                    }
                }
                mini=min(mini,end-start+1);
            }
        }
        return mini;
    }
};