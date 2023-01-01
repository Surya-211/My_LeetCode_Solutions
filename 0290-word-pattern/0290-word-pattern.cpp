class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>m1;
        unordered_map<string,int>m2;
        int ps=pattern.size();
        string word="";
        int ind=0;
        s.push_back(' ');
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ch!=' ')
            {
                word.push_back(ch);
                continue;
            }
            char c=pattern[ind];
            if(m1.find(c)==m1.end()&&m2.find(word)==m2.end())
            {
                m1[c]=word;
                m2[word]++;
            }
            else
            {
                if(m1[c]!=word)
                    return false;
            }
            ind++;
            word="";
        }
        if(ind!=ps)
            return false;
        return true;
    }
};