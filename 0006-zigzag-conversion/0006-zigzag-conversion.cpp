class Solution {
public:
    string convert(string s, int numRows) {
        
        vector<vector<char>>v(numRows);
        if(numRows==1)
            return s;
        int j=0;
        int down=1;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            v[j].push_back(ch);
            if(down==1)
            {
                j++;
                if(j==numRows)
                {
                    j-=2;
                    down=0;
                }
            }
            
            else
            {
                j--;
                if(j==-1)
                {
                    j=1;
                    down=1;
                }
            }
                
        }
        string str="";
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                str+=v[i][j];
            }
        }
        return str;
    }
};