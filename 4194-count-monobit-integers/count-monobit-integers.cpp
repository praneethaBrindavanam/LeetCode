class Solution {
public:
    int countMonobit(int n) {
        int curr=1,ans=0;
        while((curr-1)<=n) {
            ans++;
            curr<<=1;
        }
        return ans;
    }
};