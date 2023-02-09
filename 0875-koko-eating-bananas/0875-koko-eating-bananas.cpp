class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxPile=0;
        for(int i=0;i<piles.size();i++)
        {
            if(piles[i]>maxPile)
                maxPile=piles[i];
        }
        int low=1;
        int high=maxPile;
        while(low<=high)
        {
            int mid=(low+high)/2;
            long long total=0;
            for(int i=0;i<piles.size();i++)
            {
                total=total+(piles[i]/mid);
                if(piles[i]%mid!=0)
                    total++;
            }
            if(total>h)
                low=mid+1;
            else
                high=mid-1;
        }
        return low;
    }
};