class Solution {
public:
    class num
    {
        public:
        int n;
        int cn;
        int ind;
    };
    static bool comparator(num n1,num n2)
    {
        if(n1.cn<n2.cn)
            return true;
        else if(n1.cn==n2.cn)
        {
            if(n1.ind<n2.ind)
                return true;
            else
                return false;
        }
        else
            return false;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<num>v;
        for(int i=0;i<nums.size();i++)
        {
            string s;
            int n=nums[i];
            if(n==0)
                s=(char)mapping[0];
            while(n>0)
            {
                int dig=n%10;
                s=s+(char)mapping[dig];
                n/=10;
            }
            int cn=0;
            for(int j=s.size()-1;j>=0;j--)
            {
                cn=cn*10+(int)s[j];
            }
            num a;
            a.n=nums[i];
            a.cn=cn;
            a.ind=i;
            v.push_back(a);
        }
        sort(v.begin(),v.end(),comparator);
        vector<int>ans;
        for(int i=0;i<v.size();i++)
        {
            ans.push_back(v[i].n);
        }
        return ans;
    }
};