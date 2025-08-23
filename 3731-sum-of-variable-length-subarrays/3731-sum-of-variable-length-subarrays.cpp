class Solution {
public:
    int subarraySum(vector<int>& nums) {
        //range 0,0-1,1-2
        int n=nums.size();
        int t=0;
        for(int i=0;i<n;i++){
            int start=max(0,i-nums[i]);
            for(int j=start;j<=i;j++){
                t+=nums[j];
            }   
        }
        return t;
    }
};