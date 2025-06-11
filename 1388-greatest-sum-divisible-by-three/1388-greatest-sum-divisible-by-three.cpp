   class Solution{
    public:
   
    int maxSumDivThree(vector<int>& nums) {
        vector<int> dp(3);
        for (int num: nums)
            for (int i : vector<int>(dp))
                dp[(i + num) % 3] = max(dp[(i + num) % 3], i + num);
        return dp[0];
    }
   };