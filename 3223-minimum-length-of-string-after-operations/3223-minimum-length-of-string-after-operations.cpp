class Solution {
public:
    int minimumLength(string s) {
        int count=0;
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        for(auto i:m)
        {
            if(i.second%2==0)
                count+=2;
            else
                count+=1;
        }
        return count;
    }
};