class Solution {
    public int minimumDeletions(int[] nums) {
        int n = nums.length;
        int minIndex = 0;
        int maxIndex = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[minIndex]) {
                minIndex = i;
            }
            if (nums[i] > nums[maxIndex]) {
                maxIndex = i;
            }
        }
        if (minIndex > maxIndex) {
            int temp = minIndex;
            minIndex = maxIndex;
            maxIndex = temp;
        }
        int removeFromFront = maxIndex + 1;
        int removeFromBack = n - minIndex;
        int removeBothSides = (minIndex + 1) + (n - maxIndex);
        return Math.min(removeFromFront,
                Math.min(removeFromBack, removeBothSides));
    }
}