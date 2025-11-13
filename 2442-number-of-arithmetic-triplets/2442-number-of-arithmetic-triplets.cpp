class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int freq=0;
        unordered_map<int,int> s;
        for(int i=0;i<nums.size();i++){
            s[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            if(s.count(nums[i]+diff) && s.count(nums[i]+(2*diff))){
                freq++;
            }
        }
        
        return freq;
    }
};