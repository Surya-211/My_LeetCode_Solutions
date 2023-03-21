class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        stack<int>s;
        for(int i=0;i<operations.size();i++)
        {
            string str=operations[i];
            if(str=="+")
            {
                int n1=s.top();
                s.pop();
                int n2=s.top();
                s.push(n1);
                s.push(n1+n2);
            }
            else if(str=="D")
            {
                int n=s.top();
                s.push(2*n);
            }
            else if(str=="C")
            {
                s.pop();
            }
            else
            {
                int n=stoi(str);
                s.push(n);
            }
        }
        int sum=0;
        while(!s.empty())
        {
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};