class Solution {
public:
    int minAnagramLength(string s) {
        int n=s.size();
        for(int i=1;i<n;i++)
        {
            if(n%i==0)
            {
                string str1=s.substr(0,i);
                sort(str1.begin(),str1.end());
                int flag=1;
                for(int j=0;j<s.size();j+=i)
                {
                    string str2=s.substr(j,i);
                    sort(str2.begin(),str2.end());
                    if(str1!=str2)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                        return i;
            }
        }
        return n;
    }
};