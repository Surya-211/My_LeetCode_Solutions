class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack<int>s;
        int j=0;
        for(int i=0;i<popped.size();i++)
        {
            while(j<pushed.size() && (s.empty()||s.top()!=popped[i]))
            {
                s.push(pushed[j]);
                j++;
            }
            if(s.top()==popped[i])
                s.pop();
        }
        if(s.empty())
            return true;
        else
            return false;
    }
};