class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        
        unordered_map<string,int>m1;
        unordered_map<string,int>m2;
        s1=s1+" ";
        s2=s2+" ";
        string word="";
        for(int i=0;i<s1.size();i++)
        {
            char ch=s1[i];
            if(ch!=' ')
            {
                word+=ch;
                continue;
            }
            m1[word]++;
            word="";
        }
        for(int i=0;i<s2.size();i++)
        {
            char ch=s2[i];
            if(ch!=' ')
            {
                word+=ch;
                continue;
            }
            m2[word]++;
            word="";
        }
        vector<string>s;
        for(auto i:m1)
        {
            if(m2.find(i.first)==m2.end() && i.second==1)
                s.push_back(i.first);
        }
        for(auto i:m2)
        {
            if(m1.find(i.first)==m1.end() && i.second==1)
                s.push_back(i.first);
        }
        return s;
    }
};