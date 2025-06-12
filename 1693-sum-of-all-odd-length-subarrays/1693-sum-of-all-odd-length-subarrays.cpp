class Solution {
public:
   int sumOddLengthSubarrays(vector<int>& arr) {
    int res = 0;
    for (int len = 1; len <= arr.size(); len += 2) {
        for (int i = 0, sum = 0; i < arr.size(); ++i) {
            sum += arr[i];
            if (i >= len) {
                sum -= arr[i - len];
            }
            if (i >= len - 1) {
                res += sum;
            }
        }
    }
    return res;
}
};