class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        
        map<int,int>m;
        for(int i=0;i<rocks.size();i++)
        {
            m[capacity[i]-rocks[i]]++;
        }
        int count=0;
        for(auto i:m)
        {
            if(i.first==0)
            {
                count+=i.second;
                continue;
            }
            if(i.first>additionalRocks)
                break;
            else
            {
                int c=additionalRocks/i.first;
                if(c>=i.second)
                {
                    count+=i.second;
                    additionalRocks-=i.first*i.second;
                }
                else
                {
                    count+=c;
                    additionalRocks-=c*i.first;
                }
            }
        }
        return count;
    }
};