class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>m;
        for(int i=0;i<knowledge.size();i++)
        {
            m[knowledge[i][0]]=knowledge[i][1];
        }
        string str="";
        int i=0;
        while(i<s.size())
        {
            if(s[i]=='(')
            {
                i++;
                string nstr="";
                while(s[i]!=')')
                {
                    nstr+=s[i];
                    i++;
                }
                if(m.find(nstr)==m.end())
                    str+='?';
                else
                    str+=m[nstr];
            }
            else
                str+=s[i];
            i++;
        }
        return str;
    }
};