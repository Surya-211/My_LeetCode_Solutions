class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>v(temperatures.size(),0);
        stack<int>s;
        for(int i=temperatures.size()-1;i>=0;i--)
        {
            while(!s.empty()&&temperatures[i]>=temperatures[s.top()])
                s.pop();
            if(!s.empty())
                v[i]=s.top()-i;
            s.push(i);
        }
        return v;
    }
};