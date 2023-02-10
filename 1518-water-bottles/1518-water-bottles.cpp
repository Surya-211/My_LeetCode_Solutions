class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        int total=numBottles;
        int empty=numBottles;
        while(empty>=numExchange)
        {
            int bottle=empty/numExchange;
            total+=bottle;
            empty=bottle+empty%numExchange;
        }
        return total;
        
    }
};