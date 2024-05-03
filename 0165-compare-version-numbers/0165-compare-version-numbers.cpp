class Solution {
public:
    int compareVersion(string version1, string version2) {
        version1=version1+' ';
        version2=version2+' ';
        int i=0;
        int j=0;
        int n1=0;
        int n2=0;
        while(i<version1.size() || j<version2.size())
        {
            if(i<version1.size())
            {
                while(version1[i]!='.' && version1[i]!=' ')
                {
                    int dig=version1[i]-'0';
                    n1=n1*10+dig;
                    i++;
                }
            }
            if(j<version2.size())
            {
                while(version2[j]!='.' && version2[j]!=' ')
                {
                    int dig=version2[j]-'0';
                    n2=n2*10+dig;
                    j++;
                }
            }
            if(n1<n2)
                return -1;
            if(n1>n2)
                return 1;
            n1=0;
            n2=0;
            i++;
            j++;
        }
        return 0;
    }
};