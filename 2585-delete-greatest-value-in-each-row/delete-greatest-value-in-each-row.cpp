class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            sort(grid[i].begin(),grid[i].end());
        }
        int sum=0;
        for(int j=n-1;j>=0;j--){
            int maxi=0;
            for(int i=0;i<m;i++){
                if(grid[i][j]>maxi) maxi=grid[i][j];
            }
            sum+=maxi;
        }
        return sum;
    }
};