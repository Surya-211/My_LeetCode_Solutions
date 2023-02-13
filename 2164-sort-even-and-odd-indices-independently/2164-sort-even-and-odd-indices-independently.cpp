class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                even.push_back(nums[i]);
            }
            else
                odd.push_back(nums[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
        int i=0;
        int j=0;
        int ind=0;
        while(i<even.size()&&j<odd.size())
        {
            if(ind%2==0)
            {
                nums[ind]=even[i];
                ind++;
                i++;
            }
            else
            {
                nums[ind]=odd[j];
                ind++;
                j++;
            }
        }
        if(i!=even.size())
            nums[ind]=even[i];
        if(j!=odd.size())
            nums[ind]=odd[j];
        return nums;
        
    }
};