class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        sort(people.begin(),people.end());
        
        int count=0;
        int n=people.size();
        int i=0;
        int j=n-1;
        
        while(i<=j)
        {
            count++;
            if(people[i]+people[j]<=limit)
                i++;
            j--;
        }
        
        return count;
    }
};