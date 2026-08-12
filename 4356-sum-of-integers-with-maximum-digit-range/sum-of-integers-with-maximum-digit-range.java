class Solution {
  public int maxDigitRange(int[] nums) {
    int sum = nums[0];
    int max = getRange(nums[0]);

    for (int i = 1; i < nums.length; i++) {
      int range = getRange(nums[i]);
      if (range < max) continue;
      else if (range == max) sum += nums[i];
      else {
        sum = nums[i];
        max = range;
      }
    }

    return sum;
  }

  private int getRange(int num) {
    int min = Integer.MAX_VALUE;
    int max = Integer.MIN_VALUE;

    while (num > 0) {
      int digit = num % 10;
      min = Math.min(min, digit);
      max = Math.max(max, digit);
      num /= 10;
    }

    return max - min;
  }
}