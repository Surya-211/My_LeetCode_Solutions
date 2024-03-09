class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int mini=-1;
        int ind1=0;
        int ind2=0;
        while(ind1<nums1.size() && ind2<nums2.size())
        {
            if(nums1[ind1]==nums2[ind2])
            {
                mini=nums1[ind1];
                break;
            }
            else if(nums1[ind1]<nums2[ind2])
            {
                ind1++;
            }
            else
            {
                ind2++;
            }
        }
        return mini;
    }
};