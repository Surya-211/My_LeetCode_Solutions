class Solution {
public:
    int minFlips(string target) {
        
        int count=0;
        int s=target.size();
        for(int i=s-1;i>=0;i--)
        {
            if(i==s-1 && target[i]=='1')
            {
                count++;
                i--;
                while(i>=0 && target[i]=='1')
                    i--;
                i++;
            }
            else if(i==0 && target[i]=='1')
                count+=2;
            else if(target[i]=='1')
            {
                count+=2;
                i--;
                while(i>=0 && target[i]=='1')
                    i--;
                i++;
            }
        }
        return count;
    }
};