class Solution {
public:
    int minDeletions(string s) {
        
        unordered_map<int,int>m;
        sort(s.begin(),s.end());
        s=s+" ";
        int count=1;
        int ans=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
            {
                count++;
                continue;
            }
            if(m.find(count)==m.end())
            {
                m[count]++;
                count=1;
                continue;
            }
            for(int j=count-1;j>=0;j--)
            {
                if(m.find(j)==m.end())
                {
                    ans+=count-j;
                    if(j!=0)
                    m[j]++;
                    break;
                }
            }
            count=1;
        }
        return ans;
    }
};