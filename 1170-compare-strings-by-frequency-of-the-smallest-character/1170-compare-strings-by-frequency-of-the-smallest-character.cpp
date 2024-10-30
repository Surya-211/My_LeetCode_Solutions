class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int>v;
        for(int i=0;i<words.size();i++)
        {
            string str=words[i];
            sort(str.begin(),str.end());
            int count=1;
            for(int j=1;j<str.size();j++)
            {
                if(str[j]!=str[j-1])
                    break;
                else
                    count++;
            }
            v.push_back(count);
        }
        sort(v.begin(),v.end());
        vector<int>ans;
        for(int i=0;i<queries.size();i++)
        {
            string str=queries[i];
            sort(str.begin(),str.end());
            int count=1;
            for(int j=1;j<str.size();j++)
            {
                if(str[j]!=str[j-1])
                    break;
                else
                    count++;
            }
            int l=0;
            int r=v.size()-1;
            while(l<r)
            {
                int mid=(l+r)/2;
                if(v[mid]<=count)
                    l=mid+1;
                else
                    r=mid;
            }
            if(v[r]>count)
                ans.push_back(v.size()-r);
            else
                ans.push_back(0);
        }
        return ans;
    }
};