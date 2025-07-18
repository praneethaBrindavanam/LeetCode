class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if (nums.empty()) return 0;

        int maxLen = 1, currLen = 1;

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[i - 1]) {
                currLen++;
                maxLen = max(maxLen, currLen);
            } else {
                currLen = 1;
            }
        }

        return maxLen;
    }
};