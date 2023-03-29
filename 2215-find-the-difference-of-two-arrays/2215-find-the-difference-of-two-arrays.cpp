class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        for(int i=0;i<nums1.size();i++)
        {
            m1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            m2[nums2[i]]++;
        }
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<nums1.size();i++)
        {
            if(m2.find(nums1[i])==m2.end())
            {
                if(find(v1.begin(),v1.end(),nums1[i])==v1.end())
                    v1.push_back(nums1[i]);
            }
                
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(m1.find(nums2[i])==m1.end())
            {
                if(find(v2.begin(),v2.end(),nums2[i])==v2.end())
                    v2.push_back(nums2[i]);
            }
        }
        vector<vector<int>>v;
        v.push_back(v1);
        v.push_back(v2);
        return v;
    }
};