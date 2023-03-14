class Solution {
public:
    int findLucky(vector<int>& arr) {
        
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        int lucky=-1;
        for(auto i:m)
        {
            if(i.first==i.second)
            {
                if(i.first>lucky)
                    lucky=i.first;
            }
        }
        return lucky;
    }
};