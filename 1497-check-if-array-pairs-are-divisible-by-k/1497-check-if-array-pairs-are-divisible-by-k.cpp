class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            int rem=arr[i]%k;
            if(rem<0)
                rem+=k;
            m[rem]++;
        }
        if(m[0]%2==1)
            return false;
        for(int i=1;i<=k/2;i++)
        {
            if(m[i]!=m[k-i])
                return false;
        }
        return true;
    }
};