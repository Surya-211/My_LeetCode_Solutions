class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>s;
        int count=1;
        for(int i=0;i<num.size();i++)
        {
            char ch=num[i];
            if(s.empty())
            {
                s.push(ch);
                continue;
            }
            else
            {
                while(!s.empty() && count<=k)
                {
                    char ch1=s.top();
                    if(ch1-ch>0)
                    {
                        s.pop();
                        count++;
                    }
                    else
                        break;
                }
                s.push(num[i]);
            }
        }
        if(k-count+1 == s.size())
            return "0";
        while(count<=k)
        {
            s.pop();
            count++;
        }
        string str="";
        while(!s.empty())
        {
            str+=s.top();
            s.pop();
        }
        reverse(str.begin(),str.end());
        int ind=0;
        while(true)
        {
            if(str[ind]=='0')
                ind++;
            else
                break;
        }
        if(ind==str.size())
            return "0";
        else
            return str.substr(ind,str.size()-ind);
    }
};