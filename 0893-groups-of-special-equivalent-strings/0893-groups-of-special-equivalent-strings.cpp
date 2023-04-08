class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words) {
        
        unordered_map<string,int>m;
        for(int i=0;i<words.size();i++)
        {
            string odd="";
            string even="";
            for(int j=0;j<words[i].size();j++)
            {
                if(j%2==0)
                    even+=words[i][j];
                else
                    odd+=words[i][j];
            }
            sort(even.begin(),even.end());
            sort(odd.begin(),odd.end());
            string str=even+odd;
            m[str]++;
        }
        int count=0;
        for(auto i:m)
        {
            count++;
        }
        return count;
    }
};