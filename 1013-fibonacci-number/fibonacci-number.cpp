class Solution {
public:
    int fib(int n) {
        if(n <= 1) {
            return n;
        } else {
            int f = 0, f1 = 1, f2 = 0;
            for(int i = 2; i <= n; i++) {
                f2 = f + f1;
                f = f1;
                f1 = f2;
            }
            return f2;
        }
    }
};
