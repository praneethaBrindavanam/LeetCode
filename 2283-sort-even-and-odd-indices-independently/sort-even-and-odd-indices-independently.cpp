class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>evenNum;
        vector<int>oddNum;
        for(int i=0;i<nums.size();i++){
            if(i%2==0) 
            evenNum.push_back(nums[i]);
            else
            oddNum.push_back(nums[i]);
        }
        sort(evenNum.begin(),evenNum.end());
        sort(oddNum.begin(),oddNum.end(),greater<int>());
        int evenIndex=0,oddIndex=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0)
            nums[i]=evenNum[evenIndex++];
            else
            nums[i]=oddNum[oddIndex++];
        }
        return nums;
    }
};