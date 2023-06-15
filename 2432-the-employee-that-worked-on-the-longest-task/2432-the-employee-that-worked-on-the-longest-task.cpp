class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int id=0;
        int maxi=INT_MIN;
        int t=0;
        for(int i=0;i<logs.size();i++)
        {
            int a=logs[i][0];
            int b=logs[i][1];
            int diff=b-t;
            if(diff>maxi)
            {
                maxi=diff;
                id=a;
            }
            if(diff==maxi)
            {
                if(a<id)
                    id=a;
            }
            t=b;
        }
        return id;
    }
};