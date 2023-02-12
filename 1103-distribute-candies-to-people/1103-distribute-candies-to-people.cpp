class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        
        vector<int>v(num_people,0);
        int i=1;
        int j=0;
        int n=candies;
        while(true)
        {
            int ind=j%num_people;
            if(n>=i)
            {
                v[ind]+=i;
                n-=i;
                i++;
                j++;
                continue;
            }
            else
            {
                v[ind]+=n;
                break;
            }
        }
        return v;
    }
};