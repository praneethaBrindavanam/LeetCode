class Solution {
public:
    long long perfectPairs(vector<int>& nums) {
        long long ans=0;
        int n=nums.size();
        vector<int> num(n);
        for(int i=0;i<n;i++){
            num[i]=abs(nums[i]);
        }
        sort(num.begin(),num.end());
        int i=n-1,j=n-2;
        while(i>=0){
            while(j>=0&&num[i]-num[j]<=num[j]) j--;
            ans+=i-j-1;
            i--;
        }
        return ans;
    }
};