class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        //each number squares and add them
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(n%(i+1)==0){
                sum+=(nums[i]*nums[i]);
            }
        }
        return sum;

    }
};