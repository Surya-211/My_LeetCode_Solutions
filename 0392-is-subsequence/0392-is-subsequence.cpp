class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ind=0;
        for(int i=0;i<t.size();i++)
        {
            if(ind==s.size())
                break;
            if(s[ind]==t[i])
                ind++;
        }
        if(ind==s.size())
            return true;
        else
            return false;
    }
};