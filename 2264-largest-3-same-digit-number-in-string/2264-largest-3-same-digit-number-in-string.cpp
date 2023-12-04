class Solution {
public:
    string largestGoodInteger(string num) {
        int maxi=INT_MIN;
        string str="";
        for(int i=0;i<num.size()-2;i++)
        {
            string s=num.substr(i,3);
            if(s[0]==s[1] && s[1]==s[2])
            {
                int n=stoi(s);
                if(str=="")
                {
                    str=s;
                }
                else
                {
                    int n2=stoi(str);
                    if(n>n2)
                    {
                        str=s;
                    }
                }
            }
        }
        return str;
    }
};