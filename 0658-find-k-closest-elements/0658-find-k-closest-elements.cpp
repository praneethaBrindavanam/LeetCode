class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        int i = 0, j = n - 1;
        while (j - i + 1 > k) {
            if (x - arr[i] > arr[j] - x) {
                i++;
            } else {
                j--;
            }
        }

        vector<int> result;
        for (int id = i; id <= j; id++) {
            result.push_back(arr[id]);
        }
        return result;
    }
};
