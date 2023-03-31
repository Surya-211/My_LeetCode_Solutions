class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        
        int sum=0;
        if(k>numOnes)
        {
            sum+=numOnes;
            k-=numOnes;
        }
        else
            return k;
        if(k>numZeros)
        {
            k-=numZeros;
        }
        else
            return sum;
        return sum-k;
    }
};