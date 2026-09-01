class Solution {
    public List<List<Integer>> findDisappearedNumbers(int[] nums, int lower, int upper) {
        Arrays.sort(nums);
        List<List<Integer>> res = new ArrayList<>();
        int nextLower = lower;
        for(int num : nums){
            if(num < lower) continue;
            if(num > upper) break;
            if(nextLower < num){
                res.add(Arrays.asList(nextLower, num - 1));
            }
            nextLower = num + 1;
        }
        if(nextLower <= upper){
            res.add(Arrays.asList(nextLower, upper));
        }
        return res;
    }
}