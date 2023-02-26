class Solution {
public:
    bool reorderedPowerOf2(int n) {
        
        vector<int>v;
        v=count(n);
        for(int i=0;i<31;i++)
        {
            int num=(int)pow(2,i);
            vector<int>ans=count(num);
            if(v==ans)
                return true;
        }
        return false;
    }
    
    vector<int> count(int n)
    {
        vector<int>v(10,0);
        while(n>0)
        {
            int dig=n%10;
            v[dig]++;
            n/=10;
        }
        return v;
    }
};