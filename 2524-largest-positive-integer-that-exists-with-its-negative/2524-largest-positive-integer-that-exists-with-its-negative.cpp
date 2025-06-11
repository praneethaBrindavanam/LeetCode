class Solution {
public:
    int findMaxK(vector<int>& nums) {
         sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = n - 1; i >= 0; --i) {
            if (nums[i] < 0) break;
            for (int j = 0; j < n && nums[j] < 0; ++j) {
                if (nums[i] == -nums[j]) return nums[i];
            }
        }
        return -1;
    }
};
// class Solution {
// public:
//     int findMaxK(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int left=0;
//         int right = nums.size()-1;
//         while(left < right){
//             int num = (nums[left] * -1);
//             if(num == nums[right]){
//                 return nums[right];
//             }
//             if(num>nums[right]){
//                 left++;
//             }else{
//                 right--;
//             }
//         }
//         return -1;
//     }
// };