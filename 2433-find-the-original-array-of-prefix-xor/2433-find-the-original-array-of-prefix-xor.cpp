class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>arr;
        int x=pref[0];
        arr.push_back(pref[0]);
        for(int i=1;i<pref.size();i++)
        {
            int n=x^pref[i];
            arr.push_back(n);
            x=x^n;
        }
        return arr;
    }
};