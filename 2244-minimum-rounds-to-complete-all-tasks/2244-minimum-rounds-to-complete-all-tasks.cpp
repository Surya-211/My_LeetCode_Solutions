class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>m;
        for(int i=0;i<tasks.size();i++)
        {
            m[tasks[i]]++;
        }
        int count=0;
        int flag=1;
        for(auto i:m)
        {
            if(i.second==1)
            {
                flag=0;
                break;
            }
            while(i.second-3>=2)
            {
                count++;
                i.second-=3;
            }
            count+=i.second/2;
            
        }
        if(flag==0)
            return -1;
        else
            return count;
    }
};