class Solution {
public:
    int passThePillow(int n, int time) {
        
        int i=1;
        int count=0;
        int flag=1;
        while(count!=time)
        {
            if(flag==1)
            {
                i++;
                if(i==n)
                    flag=0;
            }
            else
            {
                i--;
                if(i==1)
                    flag=1;
            }
            count++;
        }
        return i;
    }
};