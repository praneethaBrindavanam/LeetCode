class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=0,i=0;
        for(i=0;i<nums.size();i++){
            n^=nums[i];
        }
        return n;
    }
};