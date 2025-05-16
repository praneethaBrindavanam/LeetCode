class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int>original=nums;
        sort(nums.begin(),nums.end());
        int largest=nums[nums.size()-1];
        int SecLargest=nums[nums.size()-2];
        if(largest>=2*SecLargest){
            for(int i=0;i<original.size();i++){
                if(original[i]==largest){
                    return i;
                }
            }
        }
        return -1;
    }
};