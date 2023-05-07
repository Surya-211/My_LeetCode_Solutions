class Solution {
public:
    int minFlips(string target) { 
        int count=0;
        int s=target.size();
        for(int i=s-1;i>=0;i--)
        {
            if(target[i]=='1')
            {
                if(i==s-1)
                    count++;
                else
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