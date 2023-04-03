class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char,int>m;
        int maxi=0;
        int ind=0;
        int i;
        for(i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(m.find(ch)==m.end())
            {
                m[ch]++;
            }
            else
            {
                maxi=max(maxi,i-ind);
                while(s[ind]!=s[i]&&ind<i)
                {
                    m.erase(s[ind]);
                    ind++;
                }
                m[ind]++;
                ind++;
            }
        }
        maxi=max(i-ind,maxi);
        return maxi;
    }
};