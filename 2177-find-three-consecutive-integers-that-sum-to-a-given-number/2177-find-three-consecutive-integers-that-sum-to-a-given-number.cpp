class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        
        vector<long long>v;
        if(num==0)
        {
            v.push_back(-1);
            v.push_back(0);
            v.push_back(1);
            return v;
        }
        long low=1;
        long high=num/3+1;
        while(low<=high)
        {
            long long mid=(low+high)/2;
            long long sum=3*mid;
            if(sum==num)
            {
                v.push_back(mid-1);
                v.push_back(mid);
                v.push_back(mid+1);
                break;
            }
            else if(sum>num)
                high=mid-1;
            else
                low=mid+1;
        }
        return v;
    }
};