class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        unordered_map<int,int>m;
        for(int i=0;i<nums1.size();i++)
        {
            m[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            int num=nums2[i];
            if(m[num]>0)
            {
                v.push_back(num);
                m[num]--;
            }
        }
        return v;
    }
};