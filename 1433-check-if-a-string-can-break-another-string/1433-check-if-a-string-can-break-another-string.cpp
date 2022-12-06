class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int flag=1;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]<s2[i])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            return true;
        flag=1;
        for(int i=0;i<s1.size();i++)
        {
            if(s2[i]<s1[i])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            return true;
        else
            return false;
        
    }
};