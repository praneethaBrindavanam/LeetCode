class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int g=0;
        int n=nums.size();
        for(int i=1;i<n;i++){
            int sub=nums[i]-nums[i-1];
            if(sub>g){
                g=sub;
            }
        }
        return g;
        
    }
};
