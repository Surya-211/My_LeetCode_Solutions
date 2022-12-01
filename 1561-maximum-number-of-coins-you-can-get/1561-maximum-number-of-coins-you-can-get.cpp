class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end(),greater<int>());
        int sum=0;
        int step=piles.size()/3;
        int i=1;
        int count=1;
        while(count<=step)
        {
            sum+=piles[i];
            i=i+2;
            count++;
        }
        return sum;
    }
};