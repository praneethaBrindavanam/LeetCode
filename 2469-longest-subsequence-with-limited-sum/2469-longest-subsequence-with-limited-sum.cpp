
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> prefix(n);
        prefix[0] = nums[0];
        for (int i = 1; i <n; i++) {
            prefix[i] = nums[i] + prefix[i - 1];
        }
        vector<int> ans(queries.size());
      
        for (int i = 0; i < queries.size(); i++){
            ans[i] = upper_bound(prefix.begin(), prefix.end(), queries[i]) - prefix.begin();
        }

        return ans;
    }
};