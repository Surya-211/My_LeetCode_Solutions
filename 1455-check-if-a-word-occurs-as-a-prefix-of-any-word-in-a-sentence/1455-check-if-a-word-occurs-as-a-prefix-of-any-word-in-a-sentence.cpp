class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        string word="";
        sentence=sentence+" ";
        int count=1;
        for(int i=0;i<sentence.size();i++)
        {
            char ch=sentence[i];
            if(ch!=' ')
            {
                word+=ch;
                continue;
            }
            if(word.starts_with(searchWord)==true)
                return count;
            count++;
            word="";
        }
        return -1;
    }
};