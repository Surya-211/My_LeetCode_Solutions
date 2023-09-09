class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        
        vector<unsigned int> v(target+1,0);
        v[0]=1;
        for(int i=1;i<=target;i++)
        {
            for(auto x : nums)
                if(x<=i)
                    v[i]+=v[i-x];
        }
        return v[target];
    }
};