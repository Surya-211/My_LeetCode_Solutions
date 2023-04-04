class Solution {
public:
    int minSteps(string s, string t) {
        
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            m1[ch]++;
        }
        for(int i=0;i<t.size();i++)
        {
            char ch=t[i];
            m2[ch]++;
        }
        int count1=0;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(m2.find(ch)!=m2.end())
            {
                m2[ch]--;
                if(m2[ch]==0)
                    m2.erase(ch);
            }
            else
                count1++;
        }
        int count2=0;
        for(int i=0;i<t.size();i++)
        {
            char ch=t[i];
            if(m1.find(ch)!=m1.end())
            {
                m1[ch]--;
                if(m1[ch]==0)
                    m1.erase(ch);
            }
            else
                count2++;
        }
        return count1+count2;
    }
};