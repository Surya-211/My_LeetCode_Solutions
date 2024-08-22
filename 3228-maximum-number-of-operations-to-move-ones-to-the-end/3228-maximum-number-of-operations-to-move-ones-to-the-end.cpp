class Solution {
public:
    int maxOperations(string s) {
        int count=0;
        int ones=0;
        if(s[0]=='1')
            ones++;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                if(s[i-1]!='1')
                    count+=ones;
                ones++;
            }
        }
        if(s[s.size()-1]=='0')
            count+=ones;
        return count;
    }
};