class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i+=2){ //adjacent pairs like[1,2],[3,4] etc...
            sum+=nums[i];
        }
        return sum;
    }
};