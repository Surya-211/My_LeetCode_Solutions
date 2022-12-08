class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>n;
        for(int i=0;i<l.size();i++)
        {
            vector<int>v;
            int start=l[i];
            int end=r[i];
            for(int j=start;j<=end;j++)
            {
                v.push_back(nums[j]);
            }
            sort(v.begin(),v.end());
            int flag=1;
            int diff=v[1]-v[0];
            for(int k=1;k<v.size();k++)
            {
                if(v[k]-v[k-1]!=diff)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
                n.push_back(true);
            else
                n.push_back(false);
        }
        return n;
    }
};