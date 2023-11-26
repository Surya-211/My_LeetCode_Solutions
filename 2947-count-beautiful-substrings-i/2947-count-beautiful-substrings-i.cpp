class Solution {
public:
    int beautifulSubstrings(string s, int k) {
        int count=0;
        string vowel="aeiou";
        int vow=0;
        int con=0;
        unordered_map<int,int>v;
        unordered_map<int,int>c;
        for(int i=0;i<s.size();i++)
        {
            if(vowel.find(s[i])!=string::npos)
                vow++;
            else
                con++;
            v[i]=vow;
            c[i]=con;
        }
        for(int i=0;i<s.size();i++)
        {
            for(int j=i+1;j<s.size();j++)
            {
                int vowi=v[j]-v[i-1];
                int coni=c[j]-c[i-1];
                if(vowi==coni && (vowi*coni)%k==0)
                    count++;
            }
        }
        return count;
    }
};