class Solution {
public:
    class duo
    {
        public:
        int pro;
        int diff;
    };
    static bool comparator(duo d1,duo d2)
    {
        if(d1.pro>d2.pro)
            return true;
        else if(d1.pro==d2.pro)
        {
            if(d1.diff<d2.diff)
                return true;
            else
                return false;
        }
        else
            return false;
    }
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<duo>v;
        for(int i=0;i<difficulty.size();i++)
        {
            duo d;
            d.pro=profit[i];
            d.diff=difficulty[i];
            v.push_back(d);
        }
        int maxi=0;
        sort(v.begin(),v.end(),comparator);
        for(int i=0;i<worker.size();i++)
        {
            for(int j=0;j<v.size();j++)
            {
                if(v[j].diff<=worker[i])
                {
                    maxi+=v[j].pro;
                    break;
                }
            }
        }
        return maxi;
    }
};