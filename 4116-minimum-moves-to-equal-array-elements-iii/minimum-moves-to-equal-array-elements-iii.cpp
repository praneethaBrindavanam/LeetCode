class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = nums[0], mov = 0;
        for(int i = 1; i < nums.size(); i++)
            maxi = max(nums[i], maxi);
        for(int i = 0; i < nums.size(); i++)
            mov += maxi - nums[i];
        return mov;
    }
};