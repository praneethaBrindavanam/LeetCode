class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        int n=nums.size();
        long s=0,r=0;
        for(int i=0;i<n;i++){
            s+=nums[i];
            r=max(r,(s+i)/(i+1));

        }
        return r;
    }
};