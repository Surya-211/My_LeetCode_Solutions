class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        
        long long sum=0;
        for(int i=0;i<chalk.size();i++)
        {
            sum+=chalk[i];
        }
        k=k%sum;
        int i=0;
        while(true)
        {
            if(chalk[i]>k)
            {
                return i;
            }
            else
                k-=chalk[i];
            i++;
            if(i==chalk.size())
                i=0;
        }
    }
};