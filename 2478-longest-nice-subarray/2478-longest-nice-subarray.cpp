class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxLen = 0, left = 0, bitmask = 0;
        for (int right = 0; right < n; ++right) {
            while ((bitmask & nums[right]) != 0) {
                bitmask ^= nums[left];  
                left++;
            }
            bitmask |= nums[right];
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};
