class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        
        unordered_map<string,int>m;
        for(int i=0;i<dictionary.size();i++)
        {
            m[dictionary[i]]++;
        }
        string nstr="";
        string word="";
        sentence.push_back(' ');
        for(int i=0;i<sentence.size();i++)
        {
            char ch=sentence[i];
            if(ch!=' ')
            {
                word=word+ch;
                continue;
            }
            string match="";
            for(int j=1;j<=word.size();j++)
            {
                match=word.substr(0,j);
                if(m.find(match)!=m.end())
                    break;
            }
            nstr=nstr+match+" ";
            word="";
        }
        nstr.pop_back();
        return nstr;
        
    }
};