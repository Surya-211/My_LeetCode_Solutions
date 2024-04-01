class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ex=numExchange;
        int em=numBottles;
        int count=em;
        while(em>=ex)
        {
            count++;
            em-=ex;
            em++;
            ex++;
        }
        return count;
    }
};