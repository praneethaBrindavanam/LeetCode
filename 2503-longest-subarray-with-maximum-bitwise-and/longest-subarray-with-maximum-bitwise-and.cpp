class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxNum = -1;

        for(int i = 0 ;i < nums.size(); i++){
            maxNum = max(maxNum, nums[i]);
        }

        int maxLen = 0, len = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == maxNum){
                len++;
                maxLen = max(maxLen, len);
            }
            else len = 0;
        }
        return maxLen;
    }
};