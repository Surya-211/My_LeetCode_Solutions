class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        priority_queue<int>q;
        for(int i=0;i<nums.size();i++)
        {
            q.push(nums[i]);
        }
        int a=q.top();
        q.pop();
        int b=q.top();
        return ((a-1)*(b-1));
        
    }
};