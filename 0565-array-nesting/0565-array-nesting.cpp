class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        vector<int>vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                int count=0;
                int ind=i;
                while(vis[ind]==0)
                {
                    vis[ind]=1;
                    ind=nums[ind];
                    count++;
                }
                maxi=max(maxi,count);
            }
        }
        return maxi;
    }
};