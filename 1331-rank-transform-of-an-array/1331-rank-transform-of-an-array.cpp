class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        int j=1;
        for(auto i:m)
        {
            m[i.first]=j;
            j++;
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=m[arr[i]];
        }
        return arr;
    }
};