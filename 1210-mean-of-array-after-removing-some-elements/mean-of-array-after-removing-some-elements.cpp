class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int removeCount = n * 0.05; 
        
        double sum = 0.0;
        for (int i = removeCount; i < n - removeCount; i++) {
            sum += arr[i];
        }
        
        return sum / (n - 2 * removeCount);
    }
};
