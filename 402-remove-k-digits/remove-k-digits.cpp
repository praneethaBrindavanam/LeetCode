class Solution {
public:
    string removeKdigits(string nums, int k) {
        int n=nums.size();
        if(k>=n){
            return "0";
        }
        stack<char>stk;
        string ans="";
        for(int i=0;i<n;i++){
            if(k==0 || stk.empty()){
                stk.push(nums[i]);
            }
            else{
                while(!stk.empty() && stk.top()>nums[i] && k>0){
                    stk.pop();
                    k--;
                }
                stk.push(nums[i]);
            }
        }
        while(k>0){
            stk.pop();
            k--;
        }
        while(!stk.empty()){
            ans+=stk.top();
            stk.pop();
        }
        int z=ans.size();
        for(int i=z-1;i>=0;i--){
            if(ans[i]=='0'){
                ans.pop_back();
            }
            else{
                break;
            }
        }
        if(ans.size()==0){
            return "0";
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};