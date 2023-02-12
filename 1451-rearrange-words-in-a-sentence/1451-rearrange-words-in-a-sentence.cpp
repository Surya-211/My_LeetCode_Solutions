class object
{
    public:
    string word;
    int len;
    int ind;
};

static bool comparator(object o1,object o2)
{
    if(o1.word.size()<o2.word.size())
        return true;
    else if(o1.word.size()==o2.word.size())
    {
        if(o1.ind<o2.ind)
            return true;
        else
            return false;
    }
    else
        return false;
}

class Solution {
public:
    string arrangeWords(string text) {
        
        vector<object>v;
        text=text+" ";
        text[0]=tolower(text[0]);
        string word="";
        for(int i=0;i<text.size();i++)
        {
            char ch=text[i];
            if(ch!=' ')
            {
                word+=ch;
                continue;
            }
            object obj;
            obj.word=word;
            obj.len=word.size();
            obj.ind=i;
            v.push_back(obj);
            word="";
        }
        sort(v.begin(),v.end(),comparator);
        string nstr="";
        for(int i=0;i<v.size();i++)
        {
            object ob=v[i];
            nstr+=ob.word+" ";
        }
        nstr[0]=toupper(nstr[0]);
        nstr.pop_back();
        return nstr;
    }
};