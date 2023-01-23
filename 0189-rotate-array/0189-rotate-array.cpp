class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        /*
        int n=nums.size();
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            v[(i+k)%n]=nums[i];
        }
        for(int i=0;i<n;i++)
            nums[i]=v[i];
        
        
        */
        k=k%nums.size();
        reverse(nums,0,nums.size()-1);
        reverse(nums,0,k-1);
        reverse(nums,k,nums.size()-1);
        
    }
    void reverse(vector<int>&v,int i,int j)
    {
        while(i<=j)
        {
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }
};

