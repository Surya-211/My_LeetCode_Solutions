class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        
        unordered_map<char,int>m;
        for(int i=0;i<brokenLetters.size();i++)
        {
            m[brokenLetters[i]]++;
        }
        text=text+" ";
        int count=0;
        int flag=0;
        int words=0;
        for(int i=0;i<text.size();i++)
        {
            char ch=text[i];
            if(ch!=' ')
            {
                if(m.find(ch)!=m.end())
                    flag=1;
                continue;
            }
            words++;
            if(flag==1)
                count++;
            flag=0;
        }
        return words-count;
    }
};