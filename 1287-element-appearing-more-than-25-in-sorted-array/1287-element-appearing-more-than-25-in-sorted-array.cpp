class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        
        int s=arr.size();
        int count=s/4;
        int c=1;
        int prev=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]==prev)
                c++;
            if(c>count)
                return arr[i];
            if(arr[i]!=prev)
                c=1;
            prev=arr[i];
        }
        return 1;
    }
};