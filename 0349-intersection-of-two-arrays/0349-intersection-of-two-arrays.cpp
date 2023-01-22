class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        for(int i=0;i<nums1.size();i++)
        {
            m[nums1[i]]++;
        }
        vector<int>v;
        for(int i=0;i<nums2.size();i++)
        {
            if(m.find(nums2[i])!=m.end() && find(v.begin(),v.end(),nums2[i])==v.end())
            {
                v.push_back(nums2[i]);
            }
        }
        return v;
    }
};