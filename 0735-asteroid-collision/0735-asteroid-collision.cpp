class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        stack<int>s;
        for(int i=0;i<asteroids.size();i++)
        {
            int n=asteroids[i];
            if(n>0)
            {
                s.push(n);
            }
            else
            {
                int cn=abs(n);
                if(s.empty())
                {
                    s.push(n);
                    continue;
                }
                if(s.top()<0)
                {
                    s.push(n);
                    continue;
                }
                while(!s.empty()&&s.top()>0&&cn>s.top())
                {
                    s.pop();
                }
                if(s.empty()||s.top()<0)
                    s.push(n);
                if(cn==s.top())
                {
                    s.pop();
                    continue;
                }
                
            }
        }
        vector<int>v;
        while(!s.empty())
        {
            v.push_back(s.top());
            s.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};