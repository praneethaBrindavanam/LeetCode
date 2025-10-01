class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = numBottles;
        int empty = numBottles;

        while (empty >= numExchange) {
            int newBottles = empty / numExchange;
            int leftover = empty % numExchange;
            total += newBottles;
            empty = newBottles + leftover;
        }

        return total;
    }
};
