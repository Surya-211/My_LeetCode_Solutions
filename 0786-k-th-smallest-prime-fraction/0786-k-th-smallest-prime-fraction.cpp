class Solution {
public:
    class frac
    {
        public:
        int a;
        int b;
        float val;
    };
    static bool comparator(frac f1,frac f2)
    {
        if(f1.val<f2.val)
            return true;
        else
            return false;
    }
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<frac>v;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                frac f;
                f.a=arr[i];
                f.b=arr[j];
                f.val=(float)arr[i]/arr[j];
                v.push_back(f);
            }
        }
        sort(v.begin(),v.end(),comparator);
        frac f=v[k-1];
        return {f.a,f.b};
    }
};