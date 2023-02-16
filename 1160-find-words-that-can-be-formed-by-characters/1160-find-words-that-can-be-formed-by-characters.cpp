class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
      unordered_map<char,int>m1;
        int len=0;
        for(int i=0;i<chars.size();i++)
        {
            m1[chars[i]]++;
        }
        for(int i=0;i<words.size();i++)
        {
            string str=words[i];
            unordered_map<char,int>m2;
            for(int j=0;j<str.size();j++)
            {
                m2[str[j]]++;
            }
            int flag=1;
            for(auto j:m2)
            {
                char c=j.first;
                int f=j.second;
                if(m1.find(c)==m1.end())
                {
                    flag=0;
                    break;
                }
                else
                {
                    if(m1[c]<f)
                    {
                        flag=0;
                        break;
                    }
                }
            }
            if(flag==1)
            {
                len+=str.size();
            }
        }
        return len;
    }
};