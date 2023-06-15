class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
    int totalSum=0;
    for(int i=0;i<n;i++)
    {
        totalSum+=cardPoints[i];
    }
    
    int sum=0,window=n-k;
    for(int i=0;i<window;i++)
    {
        sum+=cardPoints[i];
    }
    int minSum=sum;
    for(int i=window;i<n;i++)
    {
        sum+=cardPoints[i];
        sum-=cardPoints[i-window];
        minSum=min(sum,minSum);
    }
    return totalSum-minSum;
    }
};