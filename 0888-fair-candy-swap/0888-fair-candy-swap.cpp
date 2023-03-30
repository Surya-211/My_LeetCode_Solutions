class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        
        int sum=0;
        int alice=0;
        int bob=0;
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        for(int i=0;i<aliceSizes.size();i++)
        {
            m1[aliceSizes[i]]++;
            sum+=aliceSizes[i];
            alice+=aliceSizes[i];
        }
        for(int i=0;i<bobSizes.size();i++)
        {
            m2[bobSizes[i]]++;
            sum+=bobSizes[i];
            bob+=bobSizes[i];
        }
        vector<int>v;
        int flag=0;
        int mid=sum/2;
        for(auto i:m1)
        {
            int n=i.first;
            for(auto j:m2)
            {
                int m=j.first;
                if(alice-n+m==mid&&bob-m+n==mid)
                {
                    v.push_back(n);
                    v.push_back(m);
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        return v;
    }
};