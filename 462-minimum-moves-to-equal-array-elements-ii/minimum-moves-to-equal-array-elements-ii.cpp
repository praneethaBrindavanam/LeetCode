class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for (int i:nums){
            ans+=abs(nums[nums.size()/2]-i);
        } 
        return ans;
    }
};