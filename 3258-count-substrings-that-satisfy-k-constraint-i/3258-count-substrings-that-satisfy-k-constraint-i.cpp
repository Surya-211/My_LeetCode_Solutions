class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            for(int j=1;j<=s.size()-i;j++)
            {
                string str=s.substr(i,j);
                int zero=0;
                int one=0;
                for(int l=0;l<str.size();l++)
                {
                    if(str[l]=='0')
                        zero++;
                    else
                        one++;
                }
                if(zero<=k || one<=k)
                    count++;
            }
        }
        return count;
    }
};