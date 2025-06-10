class Solution {
    public int numSquares(int n) {
        List<Integer> squares = new ArrayList<>();
        for (int i = 1; i * i <= n; i++) {
            squares.add(i * i);
        }

        int[] dp = new int[n + 1];
        Arrays.fill(dp, Integer.MAX_VALUE);
        dp[0] = 0;

        for (int i = 1; i <= n; i++) {
            for (int square : squares) {
                if (square <= i) {
                    dp[i] = Math.min(dp[i], dp[i - square] + 1);
                }
            }
        }

        return dp[n];
    }
}
