class Solution {
public:
    
    void swap(vector<int>&v,int i,int j)
    {
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    
    void reverse(vector<int>&v,int i)
    {
        int j=v.size()-1;
        while(i<=j)
        {
            swap(v,i,j);
            i++;
            j--;
        }
    }
    
    void nextPermutation(vector<int>& nums) {
       int i=nums.size()-2;
        while(i>=0&&nums[i]>=nums[i+1])
        {
            i--;
        }
        if(i>=0)
        {
            int j=nums.size()-1;
            while(nums[j]<=nums[i])
            {
                j--;
            }
            swap(nums,i,j);
        }
        reverse(nums,i+1);
    }
};