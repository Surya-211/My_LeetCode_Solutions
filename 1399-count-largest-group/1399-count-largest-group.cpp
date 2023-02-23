class Solution {
public:
    int countLargestGroup(int n) {
        
        unordered_map<int,int>m;
        for(int i=1;i<=n;i++)
        {
            int sum=0;
            int cn=i;
            while(cn>0)
            {
                sum=sum+cn%10;
                cn/=10;
            }
            m[sum]++;
        }
        int max=0;
        for(auto i:m)
        {
            if(i.second>max)
                max=i.second;
        }
        int count=0;
        for(auto i:m)
        {
            if(i.second==max)
                count++;
        }
        return count;
    }
};