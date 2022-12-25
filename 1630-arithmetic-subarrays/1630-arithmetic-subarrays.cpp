class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        for(int i=0;i<l.size();i++)
        {
            vector<int>v;
            for(int j=l[i];j<=r[i];j++)
            {
                v.push_back(nums[j]);
            }
            sort(v.begin(),v.end());
            int flag=1;
            int diff=abs(v[1]-v[0]);
            for(int j=1;j<v.size();j++)
            {
                if(diff!=(v[j]-v[j-1]))
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};