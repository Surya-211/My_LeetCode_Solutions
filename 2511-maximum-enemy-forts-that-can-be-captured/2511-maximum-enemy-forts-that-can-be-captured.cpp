class Solution {
public:
    int captureForts(vector<int>& forts) {
        
        int max=0;
        for(int i=0;i<forts.size();i++)
        {
            int c=0;
            int flag=0;
            if(forts[i]==1)
            {
                i++;
                flag=1;
                while(i<forts.size()&&forts[i]!=-1&&forts[i]==0)
                {
                    c++;
                    i++;
                }
            }
            if(c>max&&i!=forts.size()&&forts[i]==-1)
            {
                max=c;
            }
            if(flag==1)
                i--;
        }
         for(int i=forts.size()-1;i>=0;i--)
        {
             int flag=0;
            int c=0;
            if(forts[i]==1)
            {
                i--;
                flag=1;
                while(i>=0&&forts[i]!=-1&&forts[i]==0)
                {
                    c++;
                    i--;
                }
            }
            if(c>max&&i!=-1&&forts[i]==-1)
            {
                max=c;
            }
             if(flag==1)
                 i++;
        }
        return max;
        
    }
};