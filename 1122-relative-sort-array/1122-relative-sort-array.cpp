class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        vector<int>v;
        vector<int>a;
        unordered_map<int,int>m;
        for(int i=0;i<arr1.size();i++)
        {
            m[arr1[i]]++;
            if(find(arr2.begin(),arr2.end(),arr1[i])==arr2.end())
                a.push_back(arr1[i]);
        }
        for(int i=0;i<arr2.size();i++)
        {
            int n=arr2[i];
            if(m.find(n)!=m.end())
            {
                int f=m[n];
                int count=1;
                while(count<=f)
                {
                    v.push_back(n);
                    count++;
                }
            }
        }
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++)
        {
            v.push_back(a[i]);
        }
        return v;
    }
};