class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int it = 0, n = nums.size(), count = 0;
        for(int i = 0;i<n;i++){
            if(nums[i] - nums[it] > k){
                count++;
                it = i;
            }
        }
        return count + 1;
    }
};