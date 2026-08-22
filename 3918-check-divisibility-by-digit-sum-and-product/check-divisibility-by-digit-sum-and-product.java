class Solution {
    public boolean checkDivisibility(int n) {
        int x = n;
        int sum = 0;
        int p = 1;

        while (n > 0) {
            int r = n % 10;
            sum += r;
            p *= r;
            n /= 10;
        }

        int rev = sum + p;
        return x % rev == 0;
    }
}