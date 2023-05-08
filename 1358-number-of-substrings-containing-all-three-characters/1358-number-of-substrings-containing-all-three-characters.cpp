class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int a=0;
        int b=0;
        int c=0;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            int j=i;
            a=0;
            b=0;
            c=0;
            while(j<s.size() && (a<1||b<1||c<1))
            {
                if(s[j]=='a')
                    a++;
                else if(s[j]=='b')
                    b++;
                else 
                    c++;
                if(a>=1&&b>=1&&c>=1)
                    break;
                else
                    j++;
            }
            if(a>=1&&b>=1&&c>=1)
                count+=n-j;
            while(i!=j)
            {
                if(s[i]=='a')
                    a--;
                else if(s[i]=='b')
                    b--;
                else
                    c--;
                if(a>=1&&b>=1&&c>=1)
                    count+=n-j;
                else
                    break;
                i++;
            }
        }
        return count;
    }
};