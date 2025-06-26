class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int max1=0;
        int c=0;

        for(int i=0;i<n;i++){
            if(nums[i]==1){
                c++;
                max1 = max(max1, c);
            }
            else{
                c=0;
            }
        }
        return max1;
    }
};