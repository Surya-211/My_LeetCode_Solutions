class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxi=0;
        int i=0;
        int j=height.size()-1;
        while(i<j)
        {
            int h=min(height[i],height[j]);
            int area=h*(j-i);
            maxi=max(maxi,area);
            while(i<j && height[i]<=h)
                i++;
            while(i<j && height[j]<=h)
                j--;
        }
        return maxi;
    }
};