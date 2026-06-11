class Solution {
public:
    bool consecutiveSetBits(int n) {
        int count = 0;
        while (n > 0) {
            if ((n & 1) && (n & 2))
                count++;
            n >>= 1;
        }
        return count == 1;
    }
};