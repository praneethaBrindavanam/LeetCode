class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int temp=nums.size();
        k=k%temp;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
            //right shift 


        
    }
};