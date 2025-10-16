class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int totalDrunk = numBottles;
        int emptyBottles = numBottles;
        
        while (emptyBottles >= numExchange) {
           
            emptyBottles -= numExchange;
            totalDrunk += 1;
            emptyBottles += 1;      
            numExchange += 1;       
        }
        
        return totalDrunk;
    }
};