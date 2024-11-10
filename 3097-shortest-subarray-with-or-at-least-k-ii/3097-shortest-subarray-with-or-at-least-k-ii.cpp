class Solution {
public:
    
    void update(vector<int>&v,int n)
    {
        for(int i=0;i<32;i++)
        {
            if((n&(1<<i))!=0)
                v[i]++;
        }
    }
    
    void remove(vector<int>&v,int n,int &orVal)
    {
        for(int i=0;i<32;i++)
        {
            int bit=n&(1<<i);
            if(bit!=0)
                v[i]--;
            if(v[i]==0)
                orVal=orVal & (~(1<<i));
        }
    }
    
    int minimumSubarrayLength(vector<int>& nums, int k) {
        vector<int>v(32,0);
        int orVal=0;
        int j=0;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            update(v,nums[i]);
            orVal=orVal | nums[i];
            while(orVal>=k && j<=i)
            {
                remove(v,nums[j],orVal);
                mini=min(mini,i-j+1);
                j++;
            }
        }
        if(mini==INT_MAX)
            return -1;
        else
            return mini;
    }
};