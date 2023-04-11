class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        
        vector<int>v=tickets;
        int i=0;
        int n=tickets.size();
        int count=0;
        while(v[k]!=0)
        {
            if(v[i]!=0)
            {
                count++;
                v[i]--;
            }
            i=(i+1)%n;
        }
        return count;
    }
};