class Solution {
public:
    int maxLength(vector<int>& nums) {
        int result = 2;

        for (int i = 0; i < nums.size() - 1; ++i) {
            int gcd = nums[i];
            int lcm = nums[i];

            for (int j = i + 1; j < nums.size(); ++j) {
                gcd = __gcd(gcd, nums[j]);

                int gcd2 = __gcd(lcm, nums[j]);
                lcm = (lcm / gcd2) * nums[j];

                if (gcd != 1 || gcd2 != 1) break;

                result = max(result, j - i + 1);
            }
        }

        return result;
    }
};