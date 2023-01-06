class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        int left=0;
        int right=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
                right++;
        }
        unordered_map<int,int>m;
        int max=0;
        m[0]=right;
        max=right;
        for(int i=1;i<=nums.size();i++)
        {
             if(nums[i-1]==0)
                left+=1;
            else
                right-=1;
            int sum=left+right;
            m[i]=sum;
            if(sum>max)
                max=sum; 
        }
        vector<int>v;
        for(auto i:m)
        {
            if(i.second==max)
                v.push_back(i.first);
        }
        return v;
    }
};