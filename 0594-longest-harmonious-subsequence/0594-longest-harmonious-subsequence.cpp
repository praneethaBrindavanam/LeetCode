class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = 0, r = 1;
        int count = 0;
        while(r < nums.size()) {
            int d = nums[r] - nums[l];
            while(d > 1 && l < r) {
                l++;
                d = nums[r] - nums[l];
            }
            if(d == 1) {
                count = max(count, r-l+1);
            }
            r++;
        }
        return count;
    }
};