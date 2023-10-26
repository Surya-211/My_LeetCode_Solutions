class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        
        int mod=pow(10,9)+7;
        
        sort(arr.begin(),arr.end());
        unordered_map <int,long> rootWithCount;
        rootWithCount[arr[0]]=1;
        for(int i=1;i<arr.size();i++)
        {
            long count=1;
            for(auto j: rootWithCount)
            {
                int root=j.first;
                if(arr[i]%root==0 && rootWithCount.find(arr[i]/root) != rootWithCount.end())
                {
                    count+=rootWithCount[root]*rootWithCount[arr[i]/root];
                }
            }
            rootWithCount[arr[i]]=count;
        }
        int n=0;
        for(auto i:rootWithCount)
            n=(n+i.second)%mod;
        
        return n;
        
    }
};