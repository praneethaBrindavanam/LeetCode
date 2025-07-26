class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> pc;
        pc[0] = 1;

        int sum = 0, count = 0;

        for (int num : nums) {
            sum += num;

            if (pc.count(sum - goal)) {
                count += pc[sum - goal];
            }

            pc[sum]++;
        }

        return count;
    }
};
