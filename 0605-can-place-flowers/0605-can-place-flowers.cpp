class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        
        if(flowerbed.size()==1)
        {
            if(n>1)
                return false;
            else
            {
                if(flowerbed[0]==1&&n==1)
                    return false;
                else
                    return true;
            }
        }
        int count=0;
        int s=flowerbed.size();
        for(int i=0;i<s;i++)
        {
            if(i==0)
            {
                if(flowerbed[i]==0&&flowerbed[i+1]==0)
                {
                    flowerbed[i]=1;
                    count++;
                }
            }
            else if(i==s-1)
            {
                if(flowerbed[i]==0&&flowerbed[i-1]==0)
                {
                    flowerbed[i]=1;
                    count++;
                }
            }
            else
            {
                if(flowerbed[i]==0&&flowerbed[i-1]==0&&flowerbed[i+1]==0)
                {
                    flowerbed[i]=1;
                    count++;
                }
            }
        }
        if(count>=n)
            return true;
        else
            return false;
    }
};