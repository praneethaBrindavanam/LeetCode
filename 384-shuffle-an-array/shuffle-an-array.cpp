class Solution {
public:
    vector<int> original, shuffled;
    int n;
    Solution(vector<int>& nums) {
        original = nums;
        shuffled = nums;
        n = nums.size();
    }
    
    vector<int> reset() {
        return original;
    }
    
    vector<int> shuffle() {
        next_permutation(shuffled.begin(), shuffled.end());
        return shuffled;
    }
};