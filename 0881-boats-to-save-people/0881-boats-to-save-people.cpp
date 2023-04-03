class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        sort(people.begin(),people.end());
        
        int count=0;
        int n=people.size();
        int i=0;
        int j=n-1;
        while(j>=0&&people[j]>=limit)
        {
            count++;
            j--;
        }
        int flag;
        while(i<j)
        {
            flag=0;
            int sum=people[i]+people[j];
            if(sum<=limit)
            {
                flag=1;
                count++;
                i++;
                j--;
            }
            else
            {
                count++;
                j--;
            }
        }
        if(i==j)
            count++;
        else if(flag==0)
            count++;
        return count;
    }
};