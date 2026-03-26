class Solution {
    public int[] resultsArray(int[] nums, int k) {
        List<Integer> vec = new ArrayList<>();
        for (int i = 0; i <= nums.length - k; i++) {
            boolean f = true;
            for (int j = i; j < i + k - 1; j++) {
                if (nums[j] != nums[j + 1] - 1) {
                    f = false;
                    break;
                }
            }
            if (f) {
                vec.add(nums[i + k - 1]);
            } else {
                vec.add(-1);
            }
        }
        
        return vec.stream().mapToInt(i -> i).toArray();
    }
}