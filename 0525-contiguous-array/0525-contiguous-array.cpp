class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        unordered_map<int,int>m;
        int count=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                count--;
            else
                count++;
            if(count==0)
                maxi=max(maxi,i+1);
            else if(m.find(count)!=m.end())
                maxi=max(maxi,i-m[count]);
            else
                m[count]=i;
        }
        return maxi;
    }
};