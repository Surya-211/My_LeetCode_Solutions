

class Solution {
public: 
    
    class duo
    {
         public:
        int cnt;
        int id;
        duo(int c,int d)
        {
            cnt=c;
            id=d;
        }
    };
    
     static bool compare(duo x,duo y)
    {
        if(x.cnt==y.cnt)
            return x.id<y.id;
         
        return x.cnt>y.cnt;
    }
    
    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
        int n=report.size();
       vector<duo>arr;
        
        set<string>pos;
        set<string>neg;
        for(int i=0;i<positive_feedback.size();i++)
        {
            pos.insert(positive_feedback[i]);
        }
        for(int i=0;i<negative_feedback.size();i++)
        {
            neg.insert(negative_feedback[i]);
        }
        
        for(int i=0;i<report.size();i++)
        {
            int count=0;
            string str=report[i];
            str.push_back(' ');
            string word="";
            for(int j=0;j<str.size();j++)
            {
                char ch=str[j];
                if(ch!=' ')
                {
                    word.push_back(ch);
                    continue;
                }
                                                
            if(pos.find(word)!=pos.end())
              {
                 count+=3;   
              }      
            if(neg.find(word)!=neg.end())
            {
                count-=1;
            }
                word="";
            }
            duo a(count,student_id[i]);
            arr.push_back(a);
        }
        sort(arr.begin(),arr.end(),compare);
        int i=0;
        vector<int>ans;
        while(i<k)
        {
            ans.push_back(arr[i].id);
            i++;
        }
        return ans; 
    }
     
};
