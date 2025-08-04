class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        
        vector<int>leftSum(nums.size());
        vector<int>rightSum(nums.size());

        leftSum[0] = 0;
        rightSum[nums.size()-1] = 0;
        int sum = nums[0];

        for(int i=1; i<nums.size(); i++){
            leftSum[i] = sum;
            sum += nums[i];
        }

        sum = nums[nums.size()-1];
        for(int i=nums.size()-2; i>=0; i--){
            rightSum[i] = sum;
            sum += nums[i];
        }

        vector<int>ans(nums.size());

        for(int i=0; i<nums.size(); i++){
            ans[i] = abs(leftSum[i]-rightSum[i]);
        }
        
        return ans;
    }
};