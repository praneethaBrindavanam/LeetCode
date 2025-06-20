class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;
        for(int i = 0, n = nums.size(); i < n; ++i){
            string digits = to_string(nums[i]);
            for(int i = 0, d = digits.length(); i < d; ++i) res.push_back(digits[i] - '0');
        }
        return res;
    }
};