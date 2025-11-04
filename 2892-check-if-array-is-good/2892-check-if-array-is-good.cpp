class Solution {
public:
    bool isGood(vector<int>& nums) {
        int length = nums.size();
        sort(nums.begin(), nums.end());  

        
        for (int i = 0; i < length - 2; i++) {
            if (nums[i] != (i + 1))
                return false; 
        }

        
        return ((nums[length - 1] == length - 1) && (nums[length - 2] == length - 1));
    }
};