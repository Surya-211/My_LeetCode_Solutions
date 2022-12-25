class Solution {
public:
    int nextGreaterElement(int n) {
        vector<int>v;
        while(n>0)
        {
            v.push_back(n%10);
            n/=10;
        }
        reverse(v.begin(),v.end());
        int flag=1;
        for(int i=1;i<v.size();i++)
        {
            if(v[i]>v[i-1])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            return -1;
        int i=v.size()-2;
        while(i>=0&&v[i]>=v[i+1])
            i--;
        if(i>=0)
        {
            int j=v.size()-1;
            while(v[j]<=v[i])
                j--;
            swap(v[i],v[j]);
        }
        rev(v,i+1);
        long num=0;
        for(int i=0;i<v.size();i++)
        {
            num=num*10+v[i];
        }
        if(num>INT_MAX)
            return -1;
        return (int)num;
    }
    void rev(vector<int>& v,int i)
    {
        int j=v.size()-1;
        while(i<=j)
        {
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
};