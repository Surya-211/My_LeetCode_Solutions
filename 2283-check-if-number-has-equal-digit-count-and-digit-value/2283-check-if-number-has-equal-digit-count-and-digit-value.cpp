class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int>m;
        for(int i=0;i<num.size();i++)
        {
            int n=num[i]-48;
            m[n]++;
        }
        int flag=1;
        for(int i=0;i<num.size();i++)
        {
            int n=num[i]-48;
            if(n!=m[i])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            return true;
        else
            return false;
    }
};