class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        map<int,int> m1;
        
        for(int i = 0 ; i<nums.size() ; i++){
            m1[nums[i]]++;
        }
        
        for(auto m : m1){
            if(m.second > nums.size()/3){
                ans.push_back(m.first);
            }
        }
        
        return ans;
    }
};