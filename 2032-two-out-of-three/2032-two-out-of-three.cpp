class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        
        vector<int>v;
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        unordered_map<int,int>m3;
        set<int>s;
        for(int i=0;i<nums1.size();i++)
        {
            m1[nums1[i]]++;
            s.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            m2[nums2[i]]++;
            s.insert(nums2[i]);
        }
        for(int i=0;i<nums3.size();i++)
        {
            m3[nums3[i]]++;
            s.insert(nums3[i]);
        }
        for(auto i:s)
        {
            if(m1.find(i)!=m1.end()&&m2.find(i)!=m2.end() || m1.find(i)!=m1.end()&&m3.find(i)!=m3.end() || m2.find(i)!=m2.end()&&m3.find(i)!=m3.end())
                v.push_back(i);
        }
        return v;
        
    }
};