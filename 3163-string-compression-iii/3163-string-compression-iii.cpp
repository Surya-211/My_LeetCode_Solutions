class Solution {
public:
    string compressedString(string word) {
        string str="";
        int count=1;
        word=word+' ';
        for(int i=1;i<word.size();i++)
        {
            if(word[i]==word[i-1])
            {
                count++;
                if(count==9)
                {
                    str+=to_string(count)+word[i-1];
                    count=0;
                }
            }
            else
            {
                if(count>0)
                    str+=to_string(count)+word[i-1];
                count=1;
            }
        }
        return str;
    }
};