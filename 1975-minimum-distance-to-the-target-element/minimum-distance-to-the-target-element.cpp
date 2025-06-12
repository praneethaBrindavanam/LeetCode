class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int i, min=INT_MAX;
        for(i=0 ; i<nums.size() ; i++)
        {
            if(nums[i]==target && abs(i-start)<min)
            {
                min = abs(i-start);
            }
        }
        return min;
    }
};