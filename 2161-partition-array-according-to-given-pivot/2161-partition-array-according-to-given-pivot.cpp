class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>v;
        int k=0;
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
            {
                swap(nums[k],nums[i]);
                k++;
            }
            else if(nums[i]==pivot)
                j++;
            else 
                v.push_back(nums[i]);
        }
        for(int i=1;i<=j;i++)
        {
            nums[k]=pivot;
            k++;
        }
        for(int i=0;i<v.size();i++)
        {
            nums[k]=v[i];
            k++;
        }
        return nums;
    }
};