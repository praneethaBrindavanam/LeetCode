class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>nums;
        int p=1;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
            p*=i;
        }
        k--;
        string result="";
        for(int i=0;i<n;i++){
            p/=(n-i);
            int index=k/p;
            result+=to_string(nums[index]);
            nums.erase(nums.begin()+index);
            k%=p;
        }
        return result;
        
    }
};