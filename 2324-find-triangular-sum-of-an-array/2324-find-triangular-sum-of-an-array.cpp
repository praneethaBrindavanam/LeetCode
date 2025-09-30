class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=n-1;
            for(int size=n;size>1;size--){
                for(int i=0;i<size-1;i++){
                nums[i]=(nums[i]+nums[i+1])%10;
            }
        }
        return nums[0];
    }
};