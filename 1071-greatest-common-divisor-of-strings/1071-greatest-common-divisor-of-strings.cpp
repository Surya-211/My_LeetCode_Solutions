class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        int s1=str1.size();
        int s2=str2.size();
        if(s1>s2)
            return gcd(str1,str2);
        else
            return gcd(str2,str1);
    }
    
    string gcd(string maxi,string mini)
    {
        string str=mini;
        int l=mini.size();
        int s=maxi.size();
        while(str.size()>0)
        {
            int n=str.size();
            if(l%n!=0||s%n!=0)
            {
                str.pop_back();
                continue;
            }
            int d=l/n;
            string nstr="";
            for(int i=0;i<d;i++)
            {
                nstr+=str;
            }
            string nstrr="";
            d=s/n;
            for(int i=0;i<d;i++)
            {
                nstrr+=str;
            }
            if(nstr==mini && nstrr==maxi)
                break;
            str.pop_back();
        }
        return str;
    }
};