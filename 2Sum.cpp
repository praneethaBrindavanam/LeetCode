class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector <int> sum;
       for(int i=0;i<nums.size()-1;++i){
        for(int j=1;j<nums.size();++j){
            if(nums[i]+nums[j] == target && i<j){
              sum.push_back(i);
              sum.push_back(j);
              break;
        }
        }
       }
        
        return sum;
    }
};
