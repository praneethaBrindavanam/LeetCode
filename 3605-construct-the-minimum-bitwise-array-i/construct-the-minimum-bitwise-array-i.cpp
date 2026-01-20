class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;

        for (int num : nums) {
            if ((num & (num - 1)) == 0) {
                ans.push_back(-1);
                continue;
            }

            int cnt = 0;
            int temp = num;
            while (temp & 1) {
                cnt++;
                temp >>= 1;
            }

            ans.push_back(num - (1 << (cnt - 1)));
        }

        return ans;
    }
};