class Solution {
public:
    int compress(vector<char>& chars) {
        
        int ind=0;
        int count=1;
        for(int i=1;i<chars.size();i++)
        {
            if(chars[i]==chars[i-1])
            {
                count++;
                continue;
            }
            if(count==1)
            {
                chars[ind]=chars[i-1];
                ind++;
                continue;
            }
            string str=to_string(count);
            chars[ind]=chars[i-1];
            ind++;
            for(int j=0;j<str.size();j++)
            {
                chars[ind]=str[j];
                ind++;
            }
            count=1;
        }
        chars[ind]=chars[chars.size()-1];
        ind++;
        if(count>1)
        {
            string str=to_string(count);
            for(int j=0;j<str.size();j++)
            {
                chars[ind]=str[j];
                ind++;
            }
        }
        return ind;
    }
};