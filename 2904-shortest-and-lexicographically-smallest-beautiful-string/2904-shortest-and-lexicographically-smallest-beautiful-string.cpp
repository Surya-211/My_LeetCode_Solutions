class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        
        int mini=INT_MAX;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            for(int j=1;j<=s.size()-i;j++)
            {
                string str=s.substr(i,j);
                int count=0;
                for(int k=0;k<str.size();k++)
                {
                    char ch=str[k];
                    if(ch=='1')
                        count++;
                }
                if(count==k)
                {
                    if(ans=="")
                        ans=str;
                    else
                    {
                        if(str.size()<ans.size())
                        {
                            ans=str;
                        }
                        else if(str.size()==ans.size() && str.compare(ans)<0)
                            ans=str;
                    }
                }
            }
        }
        return ans;
        
    }
};