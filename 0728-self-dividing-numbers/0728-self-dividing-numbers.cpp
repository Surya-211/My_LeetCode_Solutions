class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        for(int i=left;i<=right;i++)
        {
            int num=i;
            int flag=1;
            while(num>0)
            {
                int dig=num%10;
                if(dig==0||i%dig!=0)
                {
                    flag=0;
                    break;
                }
                num/=10;
            }
            if(flag==1)
                v.push_back(i);
        }
        return v;
    }
};