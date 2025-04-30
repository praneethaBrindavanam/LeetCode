class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res=0;
        for(int num:nums){
            int count=0;
            while(num){
                num/=10;
                count++;
            }
            if(count%2==0) res++;
        }
        return res;
    }
};