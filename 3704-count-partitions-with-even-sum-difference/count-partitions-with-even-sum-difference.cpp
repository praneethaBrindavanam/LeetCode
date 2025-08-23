class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int tSum=0;
        for(int i=0;i<nums.size();i++){
            tSum+=nums[i];
        }
        int lSum=0;
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            lSum+=nums[i];
            int rSum=tSum-lSum;
            if((lSum%2)==(rSum%2)){
                count++;
            }
        }
        return count;
    }
};