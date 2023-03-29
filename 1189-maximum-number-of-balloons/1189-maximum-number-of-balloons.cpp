class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        unordered_map<char,int>m;
        for(int i=0;i<text.size();i++)
        {
            m[text[i]]++;
        }
        int count=0;
        while(true)
        {
            if(m['b']>=1&&m['a']>=1&&m['l']>=2&&m['o']>=2&&m['n']>=1)
            {
                count++;
                m['b']-=1;
                m['a']-=1;
                m['l']-=2;
                m['o']-=2;
                m['n']-=1;
            }
            else
                break;
        }
        return count;
    }
};