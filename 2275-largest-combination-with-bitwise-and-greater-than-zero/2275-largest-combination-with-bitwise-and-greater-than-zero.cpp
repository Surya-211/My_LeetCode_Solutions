class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int maxi=0;
        for(int i=0;i<32;i++)
        {
            int count=0;
            for(int j=0;j<candidates.size();j++)
            {
                int n=candidates[j]&1;
                candidates[j]=candidates[j]>>1;
                if(n==1)
                    count++;
            }
            maxi=max(maxi,count);
        }
        return maxi;
    }
};