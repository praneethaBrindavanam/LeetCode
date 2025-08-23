class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int left=0,t=0,count=0,n=nums.size();
        for(int i=0;i<n;i++)
            t+=nums[i];
            for(int i=0;i<n;i++){
                left+=nums[i];
                if(nums[i]!=0) continue;
                if(2*left==t) count+=2;
                else if(abs(t-2*left)==1) count++;
            }
        
        return count;
    }
};