class pair1
{
    public:
    int num;
    int freq;
};

static bool comparator(pair1 p1,pair1 p2)
{
    if(p1.freq<p2.freq)
        return true;
    else if(p1.freq==p2.freq)
    {
        if(p1.num>p2.num)
            return true;
        else
            return false;
    }
    else
        return false;
}

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<pair1>v;
        for(auto i:m)
        {
            pair1 p;
            p.num=i.first;
            p.freq=i.second;
            v.push_back(p);
        }
        sort(v.begin(),v.end(),comparator);
        vector<int>ans;
        for(int i=0;i<v.size();i++)
        {
            pair1 p;
            p=v[i];
            int n=p.num;
            int f=p.freq;
            int j=1;
            while(j<=f)
            {
                ans.push_back(n);
                j++;
            }
        }
        return ans;
    }
};