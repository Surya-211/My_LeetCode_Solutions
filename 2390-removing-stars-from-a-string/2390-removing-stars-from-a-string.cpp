class Solution {
public:
    string removeStars(string s) {
        
        string str="";
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ch!='*')
                str.push_back(ch);
            else
                str.pop_back();
        }
        
        return str;
    }
};