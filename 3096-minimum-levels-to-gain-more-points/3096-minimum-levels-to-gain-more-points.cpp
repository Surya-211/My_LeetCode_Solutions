class Solution {
public:
    int minimumLevels(vector<int>& possible) {
        int total=0;
        unordered_map<int,int>m;
        for(int i=0;i<possible.size();i++)
        {
            if(possible[i]==0)
                total--;
            else
                total++;
            m[i]=total;
        }
        for(int i=0;i<possible.size()-1;i++)
        {
            int d=m[i];
            int b=total-d;
            if(d>b)
                return i+1;
        }
        return -1;
    }
};