class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int zeroes=0;
        for(int i=0;i<n;i++)
            {
                if(nums[i]==0)
                zeroes++;
            }
        for(int i=n-zeroes;i<n;i++)
            {
                if(nums[i]!=0)
                    count++;
            }
        
        return count;
    }
};