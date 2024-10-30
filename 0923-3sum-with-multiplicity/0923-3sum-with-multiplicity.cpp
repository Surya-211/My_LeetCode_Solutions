class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int count=0;
        int mod=(int)1e9+7;
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            count=(count+m[target-arr[i]])%mod;
            for(int j=0;j<i;j++)
            {
                m[arr[i]+arr[j]]++;
            }
        }
        return count;
    }
};