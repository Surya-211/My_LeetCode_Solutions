class Solution {
public:
    bool checkString(string s) {
        
        int flag=0;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ch=='b')
            {
                flag=1;
            }
            else
            {
                if(flag==1)
                    return false;
            }
        }
        return true;
    }
};