class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=n-1;
        while(left<right){
        for(int i=0;i<right;i++){
            nums[i]=(nums[i]+nums[i+1])%10;
        }
        right--;
        }
        return nums[0];
    }
};