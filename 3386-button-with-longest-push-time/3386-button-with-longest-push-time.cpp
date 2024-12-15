class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int prev=0;
        int maxi=0;
        int maxi_ind=INT_MAX;
        unordered_map<int,int>m;
        for(int i=0;i<events.size();i++)
        {
            int indi=events[i][0];
            int t=events[i][1];
            int diff=t-prev;
            prev=t;  
            if(diff>maxi)
            {
                maxi=diff;
                maxi_ind=indi;
            }
            else if(diff==maxi && indi<maxi_ind)
                maxi_ind=indi;
        }
        return maxi_ind;
    }
};