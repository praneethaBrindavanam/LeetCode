class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        
        for (int i = 0; i < n;i++) {
            int num = abs(nums[i]);

            if (nums[num-1] < 0) ans.push_back(num);
            else nums[num-1] *= -1;
        }
        
        return ans;
    }
};