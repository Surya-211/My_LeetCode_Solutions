class Solution {
public:
    int splitNum(int num) {
        
        vector<int>v;
        int cnum=num;
        while(cnum>0)
        {
            int dig=cnum%10;
            v.push_back(dig);
            cnum/=10;
        }
        sort(v.begin(),v.end());
        int num1=0;
        int num2=0;
        for(int i=0;i<v.size();i++)
        {
            if(i%2==0)
                num1=num1*10+v[i];
            else
                num2=num2*10+v[i];
        }
        return num1+num2;
    }
};