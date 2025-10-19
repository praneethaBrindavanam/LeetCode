class Solution {
    public int smallestRangeI(int[] nums, int k) {
        int min=nums[0],max=min;
        for(int i=1;i<nums.length;i++){
            if(nums[i]>max)max=nums[i];
            else if(nums[i]<min)min=nums[i];
        }
        return Math.max(0,max-k-min-k);
    }
}