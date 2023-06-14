class Solution {
public:
    string smallestString(string s) {
        int start=-1;
        int end=INT_MIN;
        for(int i=0;i<s.size();i++)
        {
            if(start==-1 && s[i]=='a')
            {
                continue;
            }
            if(start==-1)
                start=i;
            if(s[i]=='a')
                break;
            end=i;
        }
        if(start==-1)
        {
            s[s.size()-1]='z';
        }
        else
        {
            for(int i=start;i<=end;i++)
            {
                s[i]=s[i]-1;
            }
        }
        return s;
    }
};