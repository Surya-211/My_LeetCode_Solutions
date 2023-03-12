class Solution {
public:
    string decodeMessage(string key, string message) {
       
        unordered_map<char,char>m;
        char c='a';
        for(int i=0;i<key.size();i++)
        {
            char ch=key[i];
            if(ch!=' '&&m.find(ch)==m.end())
            {
                m[ch]=c;
                c++;
            }
        }
        string str="";
        for(int i=0;i<message.size();i++)
        {
            char ch=message[i];
            if(ch!=' ')
            {
                ch=m[ch];
            }
            str+=ch;
        }
        return str;
    }
};