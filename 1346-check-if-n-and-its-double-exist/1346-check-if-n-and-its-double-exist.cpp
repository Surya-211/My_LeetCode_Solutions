class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            {
                if(m[0]>1)
                    return true;
            }
            else if(m.find(2*arr[i])!=m.end())
                return true;
        }
        return false;
    }
};