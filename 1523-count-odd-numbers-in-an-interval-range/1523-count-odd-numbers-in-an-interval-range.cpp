class Solution {
public:
    int countOdds(int low, int high) {
        int diff=high-low;
        if(diff==0)
        {
            if(low%2!=0)
                return 1;
            else
                return 0;
        }
        else if(diff==1)
            return 1;
        else if(low%2!=0||high%2!=0)
            return (diff/2)+1;
        else
            return diff/2;
        return 1;
    }
};