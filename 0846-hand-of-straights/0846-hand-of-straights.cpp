class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0)
            return false;
        if(groupSize==1)
            return true;
        map<int,int>m;
        for(int i=0;i<hand.size();i++)
        {
            m[hand[i]]++;
        }
        int j=1;
        while(j<=hand.size())
        {
            int prev=-1;
            int k=1;
            for(auto i:m)
            {
                if(i.second==0)
                    continue;
                if(prev==-1)
                    prev=i.first;
                else if(i.first-prev!=1)
                    return false;
                m[i.first]--;
                prev=i.first;
                j++;
                if(k==groupSize)
                    break;
                k++;
            }
            if(j%groupSize==0)
                return false;
        }
        return true;
    }
};