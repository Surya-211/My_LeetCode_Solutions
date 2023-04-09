class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        
        unordered_map<string,int>m;
        int count=0;
        for(int i=0;i<words.size();i++)
        {
            string str=words[i];
            if(words[i][0]==words[i][1])
            {
                m[str]++;
                continue;
            }
            string nstr=str;
            reverse(nstr.begin(),nstr.end());
            if(m.find(nstr)!=m.end())
            {
                if(m[nstr]>0)
                {
                    count+=4;
                    m[nstr]--;
                }
                else
                    m[str]++;
            }
            else
                m[str]++;
        }
        int flag=0;
        for(auto i:m)
        {
            string s=i.first;
            if(s[0]==s[1])
            {
                if(i.second%2==0)
                    count+=2*i.second;
                else
                {
                    if(flag==0)
                    {
                        count+=2*i.second;
                        flag=1;
                    }
                    else
                        count+=2*(i.second-1);
                }
            }
        }
        return count;
    }
};