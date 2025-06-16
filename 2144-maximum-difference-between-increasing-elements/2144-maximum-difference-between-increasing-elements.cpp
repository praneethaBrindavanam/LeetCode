class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int min_val = nums[0];
        int max_diff = -1;
        for (int i = 1; i < nums.size(); ++i) {
            int num = nums[i];
            if (num > min_val)
                max_diff = max(max_diff, num - min_val);
            else
                min_val = num;
        }
        return max_diff;
    }
};