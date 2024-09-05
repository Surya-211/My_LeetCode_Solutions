class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m=rolls.size();
        int total=mean*(n+m);
        for(int i=0;i<rolls.size();i++)
        {
            total-=rolls[i];
        }
        vector<int>v;
        if(total<n)
            return v;
        if(total>n*6)
            return v;
        if(total%n==0)
        {
            for(int i=0;i<n;i++)
                v.push_back(total/n);
        }
        else
        {
            int rem=total;
            for(int i=0;i<n;i++)
            {
                v.push_back(total/n);
                rem-=total/n;
            }
            int ind=0;
            while(rem--)
            {
                v[ind++]++;
            }
        }
        return v;
    }
};