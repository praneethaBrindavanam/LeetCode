class Solution {
    using ll = long long;
public:
    long long maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long ans = (ll)nums[n-1] * nums[n-2] * 100000;
        ans = max(ans, (ll)nums[0]*nums[n-1]*-100000);
        ans = max(ans, (ll)nums[0]*nums[1]*100000);
        return ans;
    }
};