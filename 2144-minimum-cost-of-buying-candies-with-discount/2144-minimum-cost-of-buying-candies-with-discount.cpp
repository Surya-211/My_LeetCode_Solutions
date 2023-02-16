class Solution {
public:
    int minimumCost(vector<int>& cost) {
        
        sort(cost.begin(),cost.end());
        int total=0;
        int count=0;
        for(int i=cost.size()-1;i>=0;i--)
        {
            count++;
            if(count!=3)
                total+=cost[i];
            else
                count=0;
        }
        return total;
        
    }
};