class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            if(nums[i]+nums[j]<target){
                ans+=j-i;
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
        
    }
};