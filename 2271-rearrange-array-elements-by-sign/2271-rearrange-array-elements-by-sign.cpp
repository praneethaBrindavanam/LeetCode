class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int indexNeg=1;
        int indexPos=0;
        int n=nums.size();
        vector<int>res(n,0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                res[indexNeg]=nums[i];
                indexNeg+=2;
            }
            else{
                res[indexPos]=nums[i];
                indexPos+=2;
            }
        }
        return res;
        
    }
};