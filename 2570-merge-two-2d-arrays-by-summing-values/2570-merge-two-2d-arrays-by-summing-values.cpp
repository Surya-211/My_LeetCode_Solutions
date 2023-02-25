class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        
        vector<vector<int>>v;
        int i=0;
        int j=0;
        while(i<nums1.size()&&j<nums2.size())
        {
            if(nums1[i][0]<nums2[j][0])
            {
                v.push_back({nums1[i][0],nums1[i][1]});
                i++;
            }
            else if(nums2[j][0]<nums1[i][0])
            {
                v.push_back({nums2[j][0],nums2[j][1]});
                j++;
            }   
            else
            {
                v.push_back({nums1[i][0],nums1[i][1]+nums2[j][1]});
                i++;
                j++;
            }
        }
        while(i<nums1.size())
        {
            v.push_back({nums1[i][0],nums1[i][1]});
            i++;
        }
        while(j<nums2.size())
        {
            v.push_back({nums2[j][0],nums2[j][1]});
            j++;
        }
        return v;
    }
};