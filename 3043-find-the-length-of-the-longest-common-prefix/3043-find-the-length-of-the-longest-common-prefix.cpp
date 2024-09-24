class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int>s;
        for(int i=0;i<arr1.size();i++)
        {
            int n=arr1[i];
            while(n>0)
            {
                s.insert(n);
                n/=10;
            }
        }
        int maxi=0;
        for(int i=0;i<arr2.size();i++)
        {
            int n=arr2[i];
            while(n>0)
            {
                if(s.find(n)!=s.end())
                {
                    string s=to_string(n);
                    int si=s.size();
                    maxi=max(maxi,si);
                    break;
                }
                n/=10;
            }
        }
        return maxi;
    }
};