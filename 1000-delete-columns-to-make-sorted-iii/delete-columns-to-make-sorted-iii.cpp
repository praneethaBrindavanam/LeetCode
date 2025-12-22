class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int m = strs[0].size();

        vector<int> dp(m, 1);
        int maxKept = 1;

        for (int j = 0; j < m; j++) {
            for (int i = 0; i < j; i++) {
                bool valid = true;
                for (int r = 0; r < n; r++) {
                    if (strs[r][i] > strs[r][j]) {
                        valid = false;
                        break;
                    }
                }
                if (valid) {
                    dp[j] = max(dp[j], dp[i] + 1);
                }
            }
            maxKept = max(maxKept, dp[j]);
        }

        return m - maxKept;
    }
};