class Solution {
public:
    int findMaxK(vector<int>& nums) {
         sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = n - 1; i >= 0; --i) {
            if (nums[i] < 0) break;
            for (int j = 0; j < n && nums[j] < 0; ++j) {
                if (nums[i] == -nums[j]) return nums[i];
            }
        }
        return -1;
    }
};