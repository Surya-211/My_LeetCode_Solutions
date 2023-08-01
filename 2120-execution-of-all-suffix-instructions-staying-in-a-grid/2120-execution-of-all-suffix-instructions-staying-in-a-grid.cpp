class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector<int>v;
        int a=startPos[0];
        int b=startPos[1];
        for(int i=0;i<s.size();i++)
        {
            int sr=a;
            int sc=b;
            int j;
            for(j=i;j<s.size();j++)
            {
                char c=s[j];
                if(c=='R')
                {
                    sc++;
                    if(sc>=n)
                        break;
                }
                else if(c=='L')
                {
                    sc--;
                    if(sc<0)
                        break;
                }
                else if(c=='U')
                {
                    sr--;
                    if(sr<0)
                        break;
                }
                else
                {
                    sr++;
                    if(sr>=n)
                        break;
                }
            }
            v.push_back(j-i);
        }
        return v;
    }
};