class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>q;
        for(int i=0;i<nums.size();i++)
        {
            q.push(nums[i]);
        }
        while(k>0)
        {
            int n=q.top();
            q.pop();
            n++;
            q.push(n);
            k--;
        }
        long pro=1;
        int mod=(int)pow(10,9)+7;
        while(!q.empty())
        {
            int n=q.top();
            pro=(pro*n)%mod;
            q.pop();
        }
        return (int)pro;
    }
};