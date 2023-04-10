class Solution {
public:
    int largestInteger(int num) {
        
        priority_queue<int>even;
        priority_queue<int>odd;
        vector<int>v;
        int cn=num;
        while(cn>0)
        {
            int dig=cn%10;
            if(dig%2==0)
            {
                v.push_back(1);
                even.push(dig);
            }
            else
            {
                v.push_back(0);
                odd.push(dig);
            }   
            cn/=10;
        }
        reverse(v.begin(),v.end());
        int n=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==1)
            {
                v[i]=even.top();
                even.pop();
            }
            else
            {
                v[i]=odd.top();
                odd.pop();
            }
            n=n*10+v[i];
        }
        return n;
    }
};