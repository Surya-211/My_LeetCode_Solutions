class Solution {
public:
    string simplifyPath(string path) {
        
        stack<string>s;
        path=path+'/';
        for(int i=0;i<path.size();i++)
        {
            char ch=path[i];
            string str="";
            if(ch=='/')
            {
                if(s.empty())
                {
                    str.push_back(ch);
                    s.push(str);
                }
                else
                {
                    string nstr=s.top();
                    if(nstr!="/")
                    {
                        str.push_back(ch);
                        s.push(str);
                    }
                }
            }
            else if(ch=='.')
            {
                int count=0;
                int dot=0;
                while(path[i]!='/')
                {
                    if(path[i]=='.')
                        dot++;
                    str.push_back(path[i]);
                    count++;
                    i++;
                }  
                i--;
                if(count==2&&dot==2)
                {
                    s.pop();
                    if(!s.empty())
                    s.pop();
                    if(s.empty())
                        s.push("/");
                }
                else if(count>=2)
                    s.push(str);
            }
            else
            {
                while(path[i]!='/')
                {
                    str.push_back(path[i]);
                    i++;
                }
                s.push(str);
                i--;
            }
        }
        string str="";
        if(s.top()=="/")
            s.pop();
        while(!s.empty())
        {
            str=s.top()+str;
            s.pop();
        }
        if(str.size()==0)
            return "/";
        return str;
    }
};