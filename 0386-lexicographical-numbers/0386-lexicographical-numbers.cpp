class Solution {
public:
    static bool comparator(string s1,string s2)
    {
        if(s1<s2)
            return true;
        else
            return false;
    }
    vector<int> lexicalOrder(int n) {
        vector<string>v;
        for(int i=1;i<=n;i++)
        {
            v.push_back(to_string(i));
        }
        sort(v.begin(),v.end(),comparator);
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(stoi(v[i]));
        }
        return ans;
    }
};