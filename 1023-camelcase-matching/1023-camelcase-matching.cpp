class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool>v;
        for(int i=0;i<queries.size();i++)
        {
            string str=queries[i];
            int j=0;
            int k=0;
            int flag=1;
            while(j<str.size())
            {
                if(str[j]==pattern[k])
                {
                    j++;
                    k++;
                    continue;
                }
                if(isupper(str[j]))
                {
                    flag=0;
                    break;
                }
                j++;
            }
            if(k==pattern.size() && flag==1)
                v.push_back(true);
            else
                v.push_back(false);
        }
        return v;
    }
};