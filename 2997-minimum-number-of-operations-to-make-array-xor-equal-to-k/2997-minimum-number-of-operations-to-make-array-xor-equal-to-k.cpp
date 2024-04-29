class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        vector<int>v(32,0);
        for(int i=0;i<nums.size();i++)
        {
            int n=nums[i];
            int j=0;
            while(n>0)
            {
                if(n&1)
                    v[j]++;
                j++;
                n=n>>1;
            }
        }
        int count=0;
        for(int i=0;i<32;i++)
        {
            if(k&1)
            {
                if(v[i]%2==0)
                    count++;
            }
            else
            {
                if(v[i]%2!=0)
                    count++;
            }
            k=k>>1;
        }
        return count;
    }
};