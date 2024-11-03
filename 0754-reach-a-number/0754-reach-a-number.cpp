class Solution {
public:
    int reachNumber(int target) {
        target=abs(target);
        int i=1;
        int sum=0;
        while(sum<target)
        {
            sum+=i;
            i++;
        }
        if(sum==target)
            return i-1;
        if((sum-target)%2==0)
            return i-1;
        if(i%2==0)
            return i+1;
        else
            return i;
    }
};