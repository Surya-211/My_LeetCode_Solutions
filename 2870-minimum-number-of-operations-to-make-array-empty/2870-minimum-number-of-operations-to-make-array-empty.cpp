class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int count=0;
        int flag=1;
        for(auto i:m)
        {
            if(i.second==1)
                return -1;
            else if(i.second>=3)
            {
                int n=i.second/3;
                count+=n;
                if(i.second%3!=0)
                    count++;
            }
            else if(i.second==2)
                count+=i.second/2;
        }
        return count;
    }
};