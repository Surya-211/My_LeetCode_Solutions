class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        unordered_map<string,int>m;
        for(int i=0;i<bannedWords.size();i++)
        {
            m[bannedWords[i]]++;
        }
        int count=0;
        for(int i=0;i<message.size();i++)
        {
            if(m[message[i]]>0)
                count++;
        }
        if(count>=2)
            return true;
        else
            return false;
    }
};