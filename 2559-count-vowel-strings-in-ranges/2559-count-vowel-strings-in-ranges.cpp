class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        
        int sum=0;
        vector<int>v;
        for(int i=0;i<words.size();i++)
        {
            string s=words[i];
            if(s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u')
            {
                int n=s.size()-1;
                if(s[n]=='a'||s[n]=='e'||s[n]=='i'||s[n]=='o'||s[n]=='u')
                    sum++;
            }
            v.push_back(sum);
        }
        vector<int>ans;
        for(int i=0;i<queries.size();i++)
        {
            int start=queries[i][0];
            int end=queries[i][1];
            string s=words[start];
            int flag=0;
            if(s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u')
            {
                int n=s.size()-1;
                if(s[n]=='a'||s[n]=='e'||s[n]=='i'||s[n]=='o'||s[n]=='u')
                    flag=1;
            }
            int n=v[end]-v[start];
            if(flag==1)
                n++;
            ans.push_back(n);
        }
        return ans;
    }
};