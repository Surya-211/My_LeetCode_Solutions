class Solution {
public:
    int getLucky(string s, int k) {
        string str="";
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            int n=ch-'a'+1;
            str+=to_string(n);
        }
        int sum=0;
        while(k--)
        {
            sum=0;
            for(int i=0;i<str.size();i++)
            {
                sum+=(str[i]-'0');
            }
            str=to_string(sum);
        }
        return sum;
       
    }
};