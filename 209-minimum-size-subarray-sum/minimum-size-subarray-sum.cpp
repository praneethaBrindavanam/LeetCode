class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int m = INT_MAX, l = 0, r = 0, pre = 0;
        while (r < nums.size()) {
            pre += nums[r];
            while (pre >= target) { 
                m = min(m, r - l + 1);
                pre -= nums[l];
                l++;
            }
            r++;
        }
        return m == INT_MAX ? 0 : m;
    }
};