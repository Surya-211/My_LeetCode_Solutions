class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        int count=0;
        string str="";
        for(int i=0;i<arr.size();i++)
        {
            if(m[arr[i]]==1)
            {
                count++;
                if(count==k)
                {
                    str=arr[i];
                    break;
                }
            }
        }
        return str;
    }
};