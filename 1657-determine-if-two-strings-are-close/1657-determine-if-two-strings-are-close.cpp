class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())
            return false;
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(int i=0;i<word1.size();i++)
        {
            m1[word1[i]]++;
            m2[word2[i]]++;
        }
        unordered_map<int,int>a;
        unordered_map<int,int>b;
        for(auto i:m1)
        {
            a[i.second]++;
            if(m2.find(i.first)==m2.end())
                return false;
        }
        for(auto i:m2)
        {
            b[i.second]++;
        }
        for(auto i:a)
        {
            if(a[i.first]!=b[i.first])
                return false;
        }
        return true;
    }
};