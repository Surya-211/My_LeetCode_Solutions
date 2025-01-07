class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
       vector<string>v;
        for(int i=0;i<words.size();i++)
        {
            string str=words[i];
            for(int j=0;j<words.size();j++)
            {
                int found=0;
                if(i!=j)
                {
                    if(str.size()>words[j].size())
                        continue;
                    else
                    {
                        string s=words[j];
                        int n=s.size();
                        for(int k=0;k<n;k++)
                        {
                            for(int m=n-k;m>0;m--)
                            {
                                string a=s.substr(k,m);
                                if(str==a)
                                {
                                    v.push_back(str);
                                    found=1;
                                    break;
                                }
                            }
                            if(found==1)
                                break;
                        }
                        if(found==1)
                            break;
                    }
                }
            }
        }
        return v;
    }
};