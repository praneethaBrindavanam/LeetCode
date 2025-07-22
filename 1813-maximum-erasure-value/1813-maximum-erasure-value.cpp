class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        map<int,int> count;
        int sum=0,i=0,j=0,result=0;
        while(j<nums.size()) {
            sum+=nums[j];
            count[nums[j]]++;
            while(count[nums[j]] != 1) {
                sum-=nums[i];
                count[nums[i]]--;
                i++;
            }
            result = max(result, sum);
            j++;
        }
        return result;
    }
};