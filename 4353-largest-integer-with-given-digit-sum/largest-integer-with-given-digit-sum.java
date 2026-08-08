class Solution {
    public int largestInteger(int n, int s) {
        if (9 * n < s) {
            return -1;
        }

        if (s == 0) {
            return 0;
        }

        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < n; i++) {
            int d = Math.min(9, s);
            sb.append(d);
            s -= d;
        }

        return Integer.parseInt(sb.toString());
    }
}