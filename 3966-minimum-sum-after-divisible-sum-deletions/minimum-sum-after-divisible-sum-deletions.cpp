class Solution {
public:
    long long minArraySum(vector<int>& nums, int k) {
        long long res = 0, n = nums.size();
        vector<long long> dp(k, LONG_LONG_MAX);
        dp[0] = 0;  
        for (int i = 0; i < n; i++) {
            res += nums[i];
            res = dp[res % k] = min(res, dp[res % k]);
        }
        return res;
    }
};