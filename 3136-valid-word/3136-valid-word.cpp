class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3)
            return false;
        string vow1="aeiou";
        string vow2="AEIOU";
        int alpha=0,dig=0,upper=0,lower=0,vowel=0,con=0,special=0;
        for(int i=0;i<word.size();i++)
        {
            char ch=word[i];
            if(isdigit(ch))
            {
                dig=1;
                continue;
            }
            if(isalpha(ch))
            {
                alpha=1;
                if(isupper(ch))
                    upper=1;
                if(islower(ch))
                    lower=1;
                if(vow1.find(ch)!=string::npos || vow2.find(ch)!=string::npos)
                    vowel=1;
                else
                    con=1;
            }
            else
                special=1;
        }
        if((alpha==1 || dig==1 || lower==1 || upper==1) && vowel==1 && con==1 && special==0)
            return true;
        else
            return false;
    }
};