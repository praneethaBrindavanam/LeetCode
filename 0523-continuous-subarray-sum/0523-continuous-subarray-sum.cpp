class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> rem;
        rem[0] = 1;
        int totalSub = 0,singleSub = 0,sum = 0;
        for(int i = 0; i < nums.size(); ++i){
            sum += nums[i];
            if(nums[i]%k == 0) ++singleSub;
            totalSub += rem[sum%k];
            rem[sum%k]++;
        }
        return totalSub - singleSub;
    }
    
};