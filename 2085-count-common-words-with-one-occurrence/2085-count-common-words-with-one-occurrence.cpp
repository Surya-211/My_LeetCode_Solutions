class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        
        unordered_map<string,int>m1;
        unordered_map<string,int>m2;
        for(int i=0;i<words1.size();i++)
        {
            m1[words1[i]]++;
        }
        for(int i=0;i<words2.size();i++)
        {
            m2[words2[i]]++;
        }
        int count=0;
        for(auto i:m1)
        {
            if(m2.find(i.first)!=m2.end())
            {
                if(i.second==1&&m2[i.first]==1)
                    count++;
            }
        }
        return count;
    }
};