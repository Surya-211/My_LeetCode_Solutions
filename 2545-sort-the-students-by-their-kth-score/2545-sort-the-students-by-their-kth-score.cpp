int n;
static bool comparator(vector<int>&v1,vector<int>&v2)
    {
        if(v1[n]>=v2[n])
            return true;
        else
            return false;
    }
class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        
        n=k;
        sort(score.begin(),score.end(),comparator);
        return score;
    }
};
