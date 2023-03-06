class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        int count=0;
        int i=1;
        while(i>=1)
        {
            if(m.find(i)==m.end())
                count++;
            if(count==k)
                return i;
            i++;
        }
        return i;
    }
};