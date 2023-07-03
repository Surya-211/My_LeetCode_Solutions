class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size())
            return false;
        if(s==goal)
        {
            unordered_map<char,int>m;
            for(int i=0;i<s.size();i++)
            {
                m[s[i]]++;
                if(m[s[i]]>=2)
                    return true;
            }
        }
        int count=0;
        char s1;
        char s2;
        char g1;
        char g2;
        for(int i=0;i<goal.size();i++)
        {
            if(s[i]!=goal[i])
            {
                count++;
                if(count>2)
                    return false;
                if(count==1)
                {
                    s1=s[i];
                    g1=goal[i];
                }
                else
                {
                    s2=s[i];
                    g2=goal[i];
                }
            }
        }
        if(s1==g2 && s2==g1)
            return true;
        else
            return false;
    }
};