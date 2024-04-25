class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>m;
        for(int i=0;i<word.size();i++)
        {
            m[word[i]]++;
        }
        int count=0;
        for(char ch='A';ch<='Z';ch++)
        {
            if(m.find(ch)!=m.end() && m.find(tolower(ch))!=m.end())
                count++;
        }
        return count;
    }
};