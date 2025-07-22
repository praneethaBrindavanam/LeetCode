class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int>res;
        int l=0,cSum=0,mSum=0;
        for(int r=0;r<nums.size();r++){
            while(res.count(nums[r])){
                res.erase(nums[l]);
                cSum-=nums[l];
                l++;
            }
            res.insert(nums[r]);
            cSum+=nums[r];
            mSum=max(mSum,cSum);

        }

        return mSum;
    }
};