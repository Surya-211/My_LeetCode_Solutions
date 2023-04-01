class Solution {
public:
    bool checkPowersOfThree(int n) {
        
        while(true)
        {
            if(n==1)
                return true;
            if(n%3==2)
                return false;
            n=n/3;
        }
    }
};