class Solution {
public:
    int maxScore(string s) {
        unordered_map<int,int>m;
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ch=='1')
                c++;
            m[i]=c;
        }
        int maxi=0;
        int z=0;
        for(int i=0;i<s.size()-1;i++)
        {
            char ch=s[i];
            if(ch=='0')
                z++;
            int sum=z+c-m[i];
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};