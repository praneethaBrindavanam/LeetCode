class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>Sub;
        Sub[0]=1;
        int total=0,count=0;
        for(int n:nums){
            total+=n;
            if(Sub.find(total-k)!=Sub.end()){
                count+=Sub[total-k];
            }
            Sub[total]++;
        }
        return count;
            }
};