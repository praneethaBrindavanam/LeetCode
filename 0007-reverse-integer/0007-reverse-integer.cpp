class Solution {
public:
    int reverse(int x) {
        int rev = 0;

        while (x != 0) {
            int r = x % 10;
            x /= 10;
            if (rev > INT_MAX/10 || (rev == INT_MAX/10 && r > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN/10 && r < -8)) return 0;

            rev = rev * 10 + r;
        }

        return rev;
    }
};
