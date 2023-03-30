class Solution {
public:
    double trimMean(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        int n=5*arr.size()/100;
        double sum=0;
        for(int i=n;i<arr.size()-n;i++)
        {
            sum+=arr[i];
        }
        return sum/(arr.size()-2*n);
    }
};