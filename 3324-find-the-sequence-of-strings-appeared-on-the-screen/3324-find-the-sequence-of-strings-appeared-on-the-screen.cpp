class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string>v;
        string s="";
        for(int i=0;i<target.size();i++)
        {
            s+='a';
            v.push_back(s);
            while(s[i]!=target[i])
            {
                char ch=s[i];
                char ch1=ch+1;
                s.pop_back();
                s.push_back(ch1);
                v.push_back(s);
            }
        }
        return v;
    }
};