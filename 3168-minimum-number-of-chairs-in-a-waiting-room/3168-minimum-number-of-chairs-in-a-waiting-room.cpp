class Solution {
public:
    int minimumChairs(string s) {
        int count=0;
        int empty=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='E')
            {
                if(empty>0)
                    empty--;
                else
                    count++;
            }
            else
                empty++;
        }
        return count;
    }
};