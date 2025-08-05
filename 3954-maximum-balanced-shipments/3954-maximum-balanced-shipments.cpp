class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int n=weight.size(),ans=0;
        for(int i=1;i<n;i++){
            if(weight[i]<weight[i-1]){
                i++;
                ans++;
            }
        }
        return ans;        
    }
};