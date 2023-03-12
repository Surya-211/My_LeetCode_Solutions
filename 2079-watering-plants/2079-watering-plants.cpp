class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        
        int steps=0;
        int i=-1;
        int left=capacity;
        int s=plants.size()-1;
        while(i<s)
        {
            if(left>=plants[i+1])
            {
                steps++;
                left-=plants[i+1];
            }
            else
            {
                int n=i+1;
                steps+=2*n;
                steps++;
                left=capacity;
                left-=plants[i+1];
            }
            i++;
        }
        return steps;
    }
};